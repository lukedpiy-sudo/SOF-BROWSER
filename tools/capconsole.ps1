# capconsole.ps1 - capture the console window of a running process to a PNG.
#
# The Quake III based SoF engine prints to the console window it allocates
# and never to stdout, so the console window is the only place its
# diagnostics appear. PrintWindow captures the rendered buffer.
param([int]$TargetPid, [string]$Out)

Add-Type -AssemblyName System.Drawing
Add-Type @"
using System;using System.Text;using System.Runtime.InteropServices;
public class CapC {
 [DllImport("user32.dll")] public static extern bool EnumWindows(EnumProc f, IntPtr l);
 public delegate bool EnumProc(IntPtr h, IntPtr l);
 [DllImport("user32.dll")] public static extern int GetWindowText(IntPtr h, StringBuilder s, int n);
 [DllImport("user32.dll")] public static extern int GetClassName(IntPtr h, StringBuilder s, int n);
 [DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr h);
 [DllImport("user32.dll")] public static extern uint GetWindowThreadProcessId(IntPtr h, out uint p);
 [DllImport("user32.dll")] public static extern bool PrintWindow(IntPtr h, IntPtr dc, uint f);
 [DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr h, out RECT r);
 [StructLayout(LayoutKind.Sequential)] public struct RECT { public int L,T,R,B; }
}
"@

$target = $TargetPid
$found = [IntPtr]::Zero
$title = ''
[CapC]::EnumWindows({
	param($h,$l)
	$p = 0
	[CapC]::GetWindowThreadProcessId($h, [ref]$p) | Out-Null
	if ($p -eq $target) {
		$c = New-Object Text.StringBuilder 256
		$t = New-Object Text.StringBuilder 256
		[CapC]::GetClassName($h,$c,256) | Out-Null
		[CapC]::GetWindowText($h,$t,256) | Out-Null
		if ($c.ToString() -eq 'ConsoleWindowClass' -and [CapC]::IsWindowVisible($h)) {
			$script:found = $h
			$script:title = $t.ToString()
		}
	}
	return $true
}, [IntPtr]::Zero) | Out-Null

if ($found -eq [IntPtr]::Zero) { "no visible console window for pid $Pid"; exit 1 }

$r = New-Object CapC+RECT
[CapC]::GetWindowRect($found, [ref]$r) | Out-Null
$w = $r.R - $r.L; $h = $r.B - $r.T
"console '$title' ${w}x${h}"
$bmp = New-Object System.Drawing.Bitmap($w, $h)
$g = [System.Drawing.Graphics]::FromImage($bmp)
$dc = $g.GetHdc()
[CapC]::PrintWindow($found, $dc, 0) | Out-Null
$g.ReleaseHdc($dc); $g.Dispose()
$bmp.Save($Out, [System.Drawing.Imaging.ImageFormat]::Png)
$bmp.Dispose()
"saved $Out"
