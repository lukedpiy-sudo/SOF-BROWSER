# run_selftest.ps1 - start a server + two clients and let the in-game SoF
# self-test fire a round, then report the SOFTEST lines from the server log.
param(
    [string]$Map = 'q2dm1',
    [int]$Seconds = 18
)

$ErrorActionPreference = 'Continue'
$dist = Join-Path $PSScriptRoot 'dist\Release'
$exe  = Join-Path $dist 'quake2.exe'

Get-Process quake2 -ErrorAction SilentlyContinue | Stop-Process -Force -ErrorAction SilentlyContinue
Start-Sleep -Milliseconds 800

function Start-Q2 {
    param([string]$Name, [string[]]$Q2Args)
    $psi = New-Object System.Diagnostics.ProcessStartInfo
    $psi.FileName = $exe; $psi.WorkingDirectory = $dist
    $psi.UseShellExecute = $false
    $psi.RedirectStandardOutput = $true; $psi.RedirectStandardError = $true
    $psi.RedirectStandardInput = $true
    $psi.Arguments = ($Q2Args | ForEach-Object { if ($_ -match '\s') { '"' + $_ + '"' } else { $_ } }) -join ' '
    $p = New-Object System.Diagnostics.Process
    $p.StartInfo = $psi
    $sb = New-Object System.Text.StringBuilder
    $null = Register-ObjectEvent -InputObject $p -EventName OutputDataReceived -Action { if ($EventArgs.Data) { $null = $Event.MessageData.AppendLine($EventArgs.Data) } } -MessageData $sb
    $null = Register-ObjectEvent -InputObject $p -EventName ErrorDataReceived -Action { if ($EventArgs.Data) { $null = $Event.MessageData.AppendLine('[err] ' + $EventArgs.Data) } } -MessageData $sb
    $null = $p.Start(); $p.BeginOutputReadLine(); $p.BeginErrorReadLine()
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
    $t = $H.Log.ToString()
    $t | Set-Content -LiteralPath (Join-Path $dist ("st_{0}.log" -f $H.Name)) -Encoding UTF8
    try { $H.Proc.Dispose() } catch {}
    return $t
}

$server = Start-Q2 -Name 'server' -Q2Args @(
    '+set','dedicated','1', '+set','deathmatch','1',
    '+set','sof_selftest','1', '+set','sv_timeout','120', '+map', $Map
)
Write-Host "[st] server pid=$($server.Proc.Id)"
Start-Sleep -Seconds 4

$c1 = Start-Q2 -Name 'client1' -Q2Args @('+set','dedicated','0','+set','vid_fullscreen','0','+set','vid_ref','gl','+set','name','sofracer1','+connect','localhost:27910')
Start-Sleep -Seconds 3
$c2 = Start-Q2 -Name 'client2' -Q2Args @('+set','dedicated','0','+set','vid_fullscreen','0','+set','vid_ref','gl','+set','name','sofracer2','+connect','localhost:27910')
Write-Host "[st] client1 pid=$($c1.Proc.Id) client2 pid=$($c2.Proc.Id)"

Start-Sleep -Seconds $Seconds

$log = Stop-Q2 -H $server
Stop-Q2 -H $c1 | Out-Null
Stop-Q2 -H $c2 | Out-Null

Write-Host "`n=================== SOFTEST ==================="
$soft = ($log -split "`r?`n") | Where-Object { $_ -match 'SOFTEST' }
if ($soft) { $soft | ForEach-Object { $_ } } else { Write-Host '(no SOFTEST lines)' }

Write-Host "`n=================== SERVER TAIL ==================="
($log -split "`r?`n") | Where-Object { $_ } | Select-Object -Last 12

Get-Process quake2 -ErrorAction SilentlyContinue | Stop-Process -Force -ErrorAction SilentlyContinue
if ($soft -match 'VERDICT PASS') { Write-Host "`nRESULT: PASS"; exit 0 }
else { Write-Host "`nRESULT: FAIL"; exit 1 }
