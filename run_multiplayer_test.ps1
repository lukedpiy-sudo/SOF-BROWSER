# run_multiplayer_test.ps1
# End-to-end multiplayer check:
#   1. start a dedicated server on a map
#   2. start N clients that +connect to it
#   3. verify the server sees the clients connect and spawn
#   4. tear everything down (no orphaned processes -> no UDP 27910 conflict)
#
# usage: .\run_multiplayer_test.ps1 [-Map q2dm1] [-Clients 2] [-Renderer gl|software] [-Seconds 20]

param(
    [string]$Map = 'q2dm1',
    [int]$Clients = 2,
    [ValidateSet('gl','software')]
    [string]$Renderer = 'gl',
    [int]$Seconds = 20
)

$ErrorActionPreference = 'Continue'
$dist = Join-Path $PSScriptRoot 'dist\Release'
$exe  = Join-Path $dist 'quake2.exe'

if (-not (Test-Path -LiteralPath $exe)) { throw "missing $exe" }

# --- clean slate: no stale quake2 holding UDP 27910 -------------------
Get-Process quake2 -ErrorAction SilentlyContinue | Stop-Process -Force -ErrorAction SilentlyContinue
Start-Sleep -Milliseconds 800

function Start-Q2 {
    param([string]$Name, [string[]]$Q2Args)
    $psi = New-Object System.Diagnostics.ProcessStartInfo
    $psi.FileName = $exe
    $psi.WorkingDirectory = $dist
    $psi.UseShellExecute = $false
    $psi.RedirectStandardOutput = $true
    $psi.RedirectStandardError = $true
    $psi.RedirectStandardInput = $true
    $psi.Arguments = ($Q2Args | ForEach-Object { if ($_ -match '\s') { '"' + $_ + '"' } else { $_ } }) -join ' '
    $p = New-Object System.Diagnostics.Process
    $p.StartInfo = $psi
    $sb = New-Object System.Text.StringBuilder
    $null = Register-ObjectEvent -InputObject $p -EventName OutputDataReceived -Action {
        if ($EventArgs.Data) { $null = $Event.MessageData.AppendLine($EventArgs.Data) }
    } -MessageData $sb
    $null = Register-ObjectEvent -InputObject $p -EventName ErrorDataReceived -Action {
        if ($EventArgs.Data) { $null = $Event.MessageData.AppendLine('[err] ' + $EventArgs.Data) }
    } -MessageData $sb
    $null = $p.Start()
    $p.BeginOutputReadLine()
    $p.BeginErrorReadLine()
    [pscustomobject]@{ Name = $Name; Proc = $p; Log = $sb }
}

function Stop-Q2 {
    param($H)
    if (-not $H) { return }
    try {
        if (-not $H.Proc.HasExited) {
            $H.Proc.StandardInput.WriteLine('quit')
            if (-not $H.Proc.WaitForExit(8000)) { $H.Proc.Kill() }
        }
    } catch {}
    Get-EventSubscriber | Unregister-Event -ErrorAction SilentlyContinue
    $text = $H.Log.ToString()
    $path = Join-Path $dist ("mp_{0}.log" -f $H.Name)
    $text | Set-Content -LiteralPath $path -Encoding UTF8
    $H.Proc.Dispose()
    return $text
}

# --- 1. dedicated server ------------------------------------------------
$server = Start-Q2 -Name 'server' -Q2Args @(
    '+set','dedicated','1',
    '+set','deathmatch','1',
    '+set','sv_timeout','60',
    '+set','rcon_password','sofrcon',
    '+map', $Map
)
Write-Host "[mp] server pid=$($server.Proc.Id) map=$Map"

# wait for the UDP port to be bound
$bound = $false
for ($i = 0; $i -lt 30; $i++) {
    Start-Sleep -Milliseconds 500
    $ep = Get-NetUDPEndpoint -LocalPort 27910 -ErrorAction SilentlyContinue
    if ($ep) { $bound = $true; break }
    if ($server.Proc.HasExited) { break }
}
if ($bound) { Write-Host '[mp] UDP 27910 bound' } else { Write-Host '[mp] WARNING: UDP 27910 not bound' }

Start-Sleep -Seconds 3

# --- 2. clients ---------------------------------------------------------
$clientHandles = @()
for ($c = 1; $c -le $Clients; $c++) {
    $h = Start-Q2 -Name ("client{0}" -f $c) -Q2Args @(
        '+set','dedicated','0',
        '+set','vid_fullscreen','0',
        '+set','vid_ref', $Renderer,
        '+set','name',("sofracer{0}" -f $c),
        '+connect','localhost:27910'
    )
    $clientHandles += $h
    Write-Host "[mp] client$c pid=$($h.Proc.Id) renderer=$Renderer"
    Start-Sleep -Seconds 2
}

Write-Host "[mp] waiting ${Seconds}s for gameplay..."
Start-Sleep -Seconds $Seconds

# --- 3. collect ---------------------------------------------------------
$serverLog = Stop-Q2 -H $server
$clientLogs = @()
foreach ($h in $clientHandles) { $clientLogs += (Stop-Q2 -H $h) }

Write-Host "`n=================== SERVER LOG ==================="
($serverLog -split "`r?`n") | Where-Object { $_ } | Select-Object -First 120

for ($i = 0; $i -lt $clientLogs.Count; $i++) {
    Write-Host "`n=================== CLIENT $($i+1) LOG ==================="
    ($clientLogs[$i] -split "`r?`n") | Where-Object { $_ } | Select-Object -First 60
}

# --- 4. verdict --------------------------------------------------------
$text = $serverLog
$connected = ([regex]::Matches($text, '(?m)^\S+ connected\s*$')).Count
$entered   = ([regex]::Matches($text, '(?m)^\S+ entered the game\s*$')).Count
Write-Host "`n=================== VERDICT ==================="
Write-Host "server: 'connected' x$connected   'entered the game' x$entered"
if ($connected -ge $Clients -and $entered -ge $Clients) { Write-Host 'RESULT: PASS - all clients connected and spawned' }
else { Write-Host 'RESULT: FAIL - not all clients connected' }

Get-Process quake2 -ErrorAction SilentlyContinue | Stop-Process -Force -ErrorAction SilentlyContinue
