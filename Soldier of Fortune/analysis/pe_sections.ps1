# pe_sections.ps1 - parse PE section headers so address ranges can be validated.
#
# Several "call [reg+0x128]" byte patterns found by scanning the whole file
# land in data, not code. This prints each section's RVA range so callers can
# filter candidate addresses to real .text.

param(
    [string]$Dll = 'C:\Users\User\Soldier of Fortune\Base\gamex86.dll',
    [uint32]$ImageBase = 0x50000000
)

$b = [System.IO.File]::ReadAllBytes($Dll)

$peOff = [BitConverter]::ToInt32($b, 0x3C)
$numSections = [BitConverter]::ToUInt16($b, $peOff + 6)
$optSize = [BitConverter]::ToUInt16($b, $peOff + 20)
$secStart = $peOff + 24 + $optSize

Write-Host ("image base = 0x{0:X8}" -f $ImageBase)
Write-Host ("PE offset  = 0x{0:X}, sections = {1}" -f $peOff, $numSections)
Write-Host ''
Write-Host '{0,-10} {1,-10} {2,-10} {3,-10} {4}' -f 'name', 'rva', 'vsize', 'rawsize', 'rawptr'
Write-Host ('-' * 60)

for ($i = 0; $i -lt $numSections; $i++) {
    $o = $secStart + $i * 40
    $nameBytes = $b[($o)..($o + 7)]
    $name = ([System.Text.Encoding]::ASCII.GetString($nameBytes)).Trim([char]0)
    $vsize = [BitConverter]::ToUInt32($b, $o + 8)
    $rva = [BitConverter]::ToUInt32($b, $o + 12)
    $rawsize = [BitConverter]::ToUInt32($b, $o + 16)
    $rawptr = [BitConverter]::ToUInt32($b, $o + 20)
    $ch = [BitConverter]::ToUInt32($b, $o + 36)

    Write-Host ('{0,-10} 0x{1:X6}   0x{2:X6}    0x{3:X6}    0x{4:X6}   0x{5:X8}' -f `
        $name, $rva, $vsize, $rawsize, $rawptr, $ch)
}