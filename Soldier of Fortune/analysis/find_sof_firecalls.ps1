# find_sof_firecalls.ps1
#
# The weapon row's fire handler lives at row+0x128 and alt-fire at row+0x12C.
# Both are only ever reached through a function pointer, which is why Ghidra
# inferred the wrong prototype for 0x50101230.
#
# To recover the true prototype we need the CALL SITES. Scan the module for
# indirect calls (FF /2) whose 32-bit displacement is 0x128 or 0x12C and whose
# base register looks like a weapon-row pointer.
#
# FF /2 modrm forms:
#   FF 50+disp8  * 1  = CALL [reg+disp8]
#   FF 90+disp32 * 2  = CALL [reg+disp32]
# We want the disp32 forms targeting 0x128 / 0x12C.

param(
    [string]$Dll = 'C:\Users\User\Soldier of Fortune\Base\gamex86.dll',
    [uint32]$ImageBase = 0x50000000
)

$b = [System.IO.File]::ReadAllBytes($Dll)
$targets = @(0x128, 0x12C)
$regNames = @('eax','ecx','edx','ebx','esp','ebp','esi','edi')

$hits = New-Object System.Collections.ArrayList

for ($i = 0; $i -lt ($b.Length - 6); $i++) {
    if ($b[$i] -ne 0xFF) { continue }
    $modrm = $b[$i + 1]
    $reg = $modrm -band 0x07
    $mod = ($modrm -shr 6) -band 0x03
    if ($mod -ne 2) { continue }          # /2 = CALL near indirect
    if ($modrm -ge 0xC0) { continue }     # need a memory operand

    $disp = $null
    $len = 2

    if (($modrm -band 0xC0) -eq 0x80) {          # disp32
        $disp = [uint32][BitConverter]::ToUInt32($b, $i + 2)
        $len = 6
    }
    elseif (($modrm -band 0xC0) -eq 0x40) {      # disp8 (sign-extended)
        $d = $b[$i + 2]
        if ($d -gt 127) { $d -= 256 }
        $disp = [uint32]([int64]$d -band 0xFFFFFFFFL)
        $len = 3
    }
    else { continue }

    if ($targets -contains $disp) {
        $kind = if ($disp -eq 0x128) { 'fire   ' } else { 'altfire' }
        [void]$hits.Add([pscustomobject]@{
            Va  = ('0x{0:X8}' -f [uint32](([int64]$ImageBase + $i) -band 0xFFFFFFFFL))
            Reg = $regNames[$reg]
            Dsp = ('0x{0:X}' -f $disp)
            Kind = $kind
        })
    }
}

Write-Host "indirect CALL sites through weapon-row fire/alt-fire pointers: $($hits.Count)"
$hits | Group-Object Kind | ForEach-Object {
    Write-Host ("  {0}: {1} sites" -f $_.Name, $_.Count)
}
Write-Host ''
$hits | ForEach-Object { '{0}  {1}  call [{2}+{3}]' -f $_.Va, $_.Kind, $_.Reg, $_.Dsp } | Select-Object -First 40