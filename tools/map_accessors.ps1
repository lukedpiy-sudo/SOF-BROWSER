# map_accessors.ps1 - recover SoF's class field accessor table.
#
# gamex86.dll does not read the weapon/item records by direct offset; it goes
# through a family of small accessor functions that were generated from the
# class field definitions:
#
#     setter:  mov eax,[esp+4] ; mov [ecx+<off>],eax ; ret 4
#     getter:  mov eax,[ecx+<off>] ; ret
#
# Enumerating them maps every SoF object field offset to the accessor that
# touches it, which is the first step to naming the fields.

param([string]$Disasm = "$env:TEMP\sof_disasm.txt")

$setter = '^\s*([0-9A-F]{8}):\s+8B 44 24 04\s+mov\s+eax,dword ptr \[esp\+4\]'
$getter = '^\s*([0-9A-F]{8}):\s+8B 81 ([0-9A-F]{2}) ([0-9A-F]{2}) 00 00\s+mov\s+eax,dword ptr \[ecx\+([0-9A-F]{8})h\]'

$lines = Get-Content -LiteralPath $Disasm
Write-Host "scanning $($lines.Count) lines ..."

$fields = @{}
$getters = 0
$setters = 0

for ($i = 0; $i -lt $lines.Count; $i++) {
    $l = $lines[$i]

    # getter: mov eax,[ecx+off] ; ret
    if ($l -match $getter) {
        $off = [Convert]::ToInt32($Matches[4], 16)
        $getters++
        if (-not $fields.ContainsKey($off)) { $fields[$off] = @{} }
        $fields[$off]['get'] = $Matches[1]
        continue
    }

    # setter: mov eax,[esp+4] ; mov [ecx+off],eax ; ret 4
    if ($l -match $setter -and ($i + 1) -lt $lines.Count) {
        $n = $lines[$i + 1]
        if ($n -match '^\s*([0-9A-F]{8}):\s+89 81 ([0-9A-F]{2}) ([0-9A-F]{2}) 00 00\s+mov\s+dword ptr \[ecx\+([0-9A-F]{8})h\],eax') {
            $off = [Convert]::ToInt32($Matches[4], 16)
            $setters++
            if (-not $fields.ContainsKey($off)) { $fields[$off] = @{} }
            $fields[$off]['set'] = $Matches[1]
        }
    }
}

Write-Host "getters=$getters setters=$setters distinct fields=$($fields.Count)"

$out = Join-Path (Split-Path -Parent $PSScriptRoot) 'sof_field_accessors.txt'
"offset`tgetter`tsetter" | Set-Content -LiteralPath $out
foreach ($off in ($fields.Keys | Sort-Object)) {
    $g = if ($fields[$off]['get']) { '0x' + $fields[$off]['get'] } else { '' }
    $s = if ($fields[$off]['set']) { '0x' + $fields[$off]['set'] } else { '' }
    "0x{0:X}`t{1}`t{2}" -f $off, $g, $s | Add-Content -LiteralPath $out
}
Write-Host "wrote $out"
Get-Content -LiteralPath $out | Select-Object -First 30
