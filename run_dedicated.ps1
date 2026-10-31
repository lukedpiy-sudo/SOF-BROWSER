# run_dedicated.ps1 - start the dedicated server, capture the full console
# log, then shut it down cleanly with "quit".
#
# Q2's stdout is block-buffered when redirected, so we must let the process
# exit normally to get the complete log. Feeding "quit" on stdin is the clean
# way to ask it to exit.
#
# usage: .\run_dedicated.ps1 [-Map dm4] [-Seconds 25] [-ExtraArgs ...]

param(
    [string]$Map = 'dm4',
    [int]$Seconds = 25,
    [string[]]$Extra = @()
)

$dist = Join-Path $PSScriptRoot 'dist\Release'
$outFile = Join-Path $dist 'dedicated_out.txt'
$errFile = Join-Path $dist 'dedicated_err.txt'
Remove-Item $outFile, $errFile -Force -ErrorAction SilentlyContinue

$psi = New-Object System.Diagnostics.ProcessStartInfo
$psi.FileName = Join-Path $dist 'quake2.exe'
$psi.WorkingDirectory = $dist
$psi.UseShellExecute = $false
$psi.RedirectStandardOutput = $true
$psi.RedirectStandardError = $true
$psi.RedirectStandardInput = $true

$argList = @('+set', 'dedicated', '1', '+set', 'deathmatch', '1', '+set', 'sv_timeout', '60')
if ($Map) { $argList += @('+map', $Map) }
$argList += $Extra
# .NET Framework (PowerShell 5.1) has no ArgumentList collection; use Arguments.
$psi.Arguments = ($argList | ForEach-Object { if ($_ -match '\s') { '"' + $_ + '"' } else { $_ } }) -join ' '

$proc = New-Object System.Diagnostics.Process
$proc.StartInfo = $psi
$sb = New-Object System.Text.StringBuilder
$null = Register-ObjectEvent -InputObject $proc -EventName OutputDataReceived -Action {
    if ($EventArgs.Data) { $null = $Event.MessageData.AppendLine($EventArgs.Data) }
} -MessageData $sb
$null = Register-ObjectEvent -InputObject $proc -EventName ErrorDataReceived -Action {
    if ($EventArgs.Data) { $null = $Event.MessageData.AppendLine('[err] ' + $EventArgs.Data) }
} -MessageData $sb

$null = $proc.Start()
$proc.BeginOutputReadLine()
$proc.BeginErrorReadLine()

Write-Host "started pid=$($proc.Id) map=$Map ; waiting ${Seconds}s"
Start-Sleep -Seconds $Seconds

if (-not $proc.HasExited) {
    Write-Host "sending quit..."
    try { $proc.StandardInput.WriteLine('quit') } catch {}
    if (-not $proc.WaitForExit(10000)) {
        Write-Host "did not exit on quit; killing"
        $proc.Kill()
    }
}
Get-EventSubscriber | Unregister-Event -ErrorAction SilentlyContinue

$sb.ToString() | Set-Content -LiteralPath $outFile -Encoding UTF8
Write-Host "=== console log ($($outFile)) ==="
$sb.ToString() -split "`r?`n" | Where-Object { $_ } | Select-Object -First 80