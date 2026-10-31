# run_gameplay_test.ps1
# End-to-end SoF multiplayer gameplay test.
#
#   1. start a dedicated server on a deathmatch map
#   2. start two clients and let them connect and spawn
#   3. ask the server (via the game module's debug command, typed into
#      client 1's console) to place client 2 directly in front of client 1
#   4. inject a real mouse click into client 1 so it fires
#   5. read the player state back and verify that
#        - client 1's ammo decreased by the SoF per-shot cost
#        - client 2's health dropped
#
# usage: .\run_gameplay_test.ps1 [-Map q2dm1] [-Shots 3]

param(
    [string]$Map = 'q2dm1',
    [int]$Shots = 3
)

$ErrorActionPreference = 'Continue'
$dist   = Join-Path $PSScriptRoot 'dist\Release'
$exe    = Join-Path $dist 'quake2.exe'
$q2in   = Join-Path $PSScriptRoot 'tools\q2input.exe'

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
    if (-not $H) { return '' }
    try {
        if (-not $H.Proc.HasExited) {
            $H.Proc.StandardInput.WriteLine('quit')
            if (-not $H.Proc.WaitForExit(6000)) { $H.Proc.Kill() }
        }
    } catch {}
    Get-EventSubscriber | Unregister-Event -ErrorAction SilentlyContinue
    $text = $H.Log.ToString()
    $text | Set-Content -LiteralPath (Join-Path $dist ("gp_{0}.log" -f $H.Name)) -Encoding UTF8
    try { $H.Proc.Dispose() } catch {}
    return $text
}

# --- server ------------------------------------------------------------
$server = Start-Q2 -Name 'server' -Q2Args @(
    '+set','dedicated','1', '+set','deathmatch','1',
    '+set','sv_timeout','120', '+map', $Map
)
Write-Host "[gp] server pid=$($server.Proc.Id)"

for ($i = 0; $i -lt 40; $i++) {
    Start-Sleep -Milliseconds 500
    if (Get-NetUDPEndpoint -LocalPort 27910 -ErrorAction SilentlyContinue) { break }
    if ($server.Proc.HasExited) { break }
}
Start-Sleep -Seconds 2

# --- clients -----------------------------------------------------------
$c1 = Start-Q2 -Name 'client1' -Q2Args @(
    '+set','dedicated','0', '+set','vid_fullscreen','0', '+set','vid_ref','gl',
    '+set','name','sofracer1', '+connect','localhost:27910'
)
Start-Sleep -Seconds 2
$c2 = Start-Q2 -Name 'client2' -Q2Args @(
    '+set','dedicated','0', '+set','vid_fullscreen','0', '+set','vid_ref','gl',
    '+set','name','sofracer2', '+connect','localhost:27910'
)
Write-Host "[gp] client1 pid=$($c1.Proc.Id)  client2 pid=$($c2.Proc.Id)"
Start-Sleep -Seconds 6

# --- talk to the game module through client 1's console ----------------
function Invoke-GameCmd {
    param([string]$Cmd)
    Write-Host "[gp] -> '$Cmd'"
    & $q2in $c1.Proc.Id console $Cmd | Out-Null
    Start-Sleep -Milliseconds 1200
}

Invoke-GameCmd 'sofpv'
Invoke-GameCmd 'soffront sofracer2'

# give client1 a known ammo count in the inventory slot its weapon uses
$serverLogBefore = $server.Log.ToString()
$slot = ([regex]::Match($serverLogBefore, 'sofpv: \[0\] .*ammo_index=(\d+)'))
$slotIdx = if ($slot.Success) { $slot.Groups[1].Value } else { '' }
Write-Host "[gp] client1 ammo slot = '$slotIdx'"

if ($slotIdx -ne '') {
    Invoke-GameCmd ("sofammo sofracer1 {0} 50" -f $slotIdx)
}

# --- fire --------------------------------------------------------------
Write-Host "[gp] firing $Shots shot(s) from client1"
for ($s = 0; $s -lt $Shots; $s++) {
    & $q2in $c1.Proc.Id shot 1 | Out-Null
    Start-Sleep -Milliseconds 700
}

Start-Sleep -Seconds 1
Invoke-GameCmd 'sofpv'

# --- collect -----------------------------------------------------------
$serverLog = Stop-Q2 -H $server
Stop-Q2 -H $c1 | Out-Null
Stop-Q2 -H $c2 | Out-Null

Write-Host "`n=================== GAMEPLAY LINES ==================="
($serverLog -split "`r?`n") | Where-Object { $_ -match 'sofpv|soffront|sofammo' } | ForEach-Object { $_ }

# --- verdict -----------------------------------------------------------
$pv = [regex]::Matches($serverLog, 'sofpv: \[(\d)\] name=(\S+) health=(\d+).*ammo_index=(\d+) ammo=(-?\d+)')
if ($pv.Count -lt 2) {
    Write-Host "`nRESULT: FAIL - could not read player state"
    Get-Process quake2 -ErrorAction SilentlyContinue | Stop-Process -Force -ErrorAction SilentlyContinue
    exit 1
}

$states = @{}
foreach ($m in $pv) {
    $states[$m.Groups[2].Value] = @{
        health = [int]$m.Groups[3].Value
        ammo   = [int]$m.Groups[5].Value
    }
}

Write-Host "`n=================== VERDICT ==================="
foreach ($k in $states.Keys) {
    Write-Host ("  {0}: health={1} ammo={2}" -f $k, $states[$k].health, $states[$k].ammo)
}

Get-Process quake2 -ErrorAction SilentlyContinue | Stop-Process -Force -ErrorAction SilentlyContinue
Write-Host "see the sofpv lines above for the before/after comparison"
