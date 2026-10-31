# run_inject_test.ps1 - focused test of the input injector.
param([string]$Map = 'q2dm1', [string]$Text = 'sofpv')

$ErrorActionPreference = 'Continue'
$dist = Join-Path $PSScriptRoot 'dist\Release'
$exe  = Join-Path $dist 'quake2.exe'
$q2in = Join-Path $PSScriptRoot 'tools\q2input.exe'

Get-Process quake2 -ErrorAction SilentlyContinue | Stop-Process -Force -ErrorAction SilentlyContinue
Start-Sleep -Milliseconds 800

function Start-Q2 {
    param([string]$Name, [string[]]$Q2Args)
    $psi = New-Object System.Diagnostics.ProcessStartInfo
    $psi.FileName = $exe; $psi.WorkingDirectory = $dist
    $psi.UseShellExecute = $false
    $psi.RedirectStandardOutput = $true; $psi.RedirectStandardError = $true
    $psi.Arguments = ($Q2Args | ForEach-Object { if ($_ -match '\s') { '"' + $_ + '"' } else { $_ } }) -join ' '
    $p = New-Object System.Diagnostics.Process
    $p.StartInfo = $psi
    $sb = New-Object System.Text.StringBuilder
    $null = Register-ObjectEvent -InputObject $p -EventName OutputDataReceived -Action { if ($EventArgs.Data) { $null = $Event.MessageData.AppendLine($EventArgs.Data) } } -MessageData $sb
    $null = $p.Start(); $p.BeginOutputReadLine()
    [pscustomobject]@{ Name = $Name; Proc = $p; Log = $sb }
}

function Save-Screen {
    param([string]$Path)
    Add-Type -AssemblyName System.Windows.Forms, System.Drawing
    $b = [System.Windows.Forms.SystemInformation]::VirtualScreen
    $bmp = New-Object System.Drawing.Bitmap($b.Width, $b.Height)
    $g = [System.Drawing.Graphics]::FromImage($bmp)
    $g.CopyFromScreen($b.Location, [System.Drawing.Point]::Empty, $b.Size)
    $bmp.Save($Path, [System.Drawing.Imaging.ImageFormat]::Png)
    $g.Dispose(); $bmp.Dispose()
    Write-Host "[inj] screenshot -> $Path"
}

$server = Start-Q2 -Name 'server' -Q2Args @('+set','dedicated','1','+set','deathmatch','1','+map',$Map)
Start-Sleep -Seconds 4
$c1 = Start-Q2 -Name 'client1' -Q2Args @('+set','dedicated','0','+set','vid_fullscreen','0','+set','vid_ref','gl','+set','name','sofracer1','+connect','localhost:27910')
Start-Sleep -Seconds 6

Write-Host "[inj] typing '$Text' (no Enter) into client1 console"
& $q2in $c1.Proc.Id type $Text
Start-Sleep -Milliseconds 800
Save-Screen (Join-Path $dist 'inj_typed.png')

Write-Host "[inj] now pressing Enter"
& $q2in $c1.Proc.Id console $Text
Start-Sleep -Seconds 2
Save-Screen (Join-Path $dist 'inj_entered.png')

Start-Sleep -Seconds 2
Write-Host "`n=================== SERVER LOG ==================="
$server.Log.ToString() -split "`r?`n" | Where-Object { $_ } | Select-Object -Last 25

Get-Process quake2 -ErrorAction SilentlyContinue | Stop-Process -Force -ErrorAction SilentlyContinue
