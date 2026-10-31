# decode_sof_weapontable.ps1
#
# Decodes the unrolled weapon-table registration block in SoF gamex86.dll.
#
# Block: 0x50064b38 - 0x5006545f contains one CALL to the row-initializer
# 0x50065470 per weapon, each preceded by a run of PUSH immediates and a
# MOV ECX,<row base> (the `this` pointer, i.e. this + stride*index).
#
# Because pushes are right-to-left, the LAST push before the call is arg1.
# The initializer takes 18 args; `this` is ECX.
#
# Row offsets written by 0x50065470 (from its dossier):
#   +0x004 arg5   +0x008 arg6   +0x00C arg7   +0x010 arg10
#   +0x014 str[64] arg1  +0x054 str[64] arg2
#   +0x094 str[64] arg3  +0x0D4 str[64] arg16
#   +0x114 arg4   +0x118 arg8   +0x11C arg9   +0x120 arg12
#   +0x124 arg13  +0x128 arg11  +0x12C arg14  +0x130 arg15
#   +0x134..+0x140 = literal 0
#   +0x144 arg17  +0x148 arg18

param(
    [string]$Dll = 'C:\Users\User\Soldier of Fortune\Base\gamex86.dll',
    [int]$StartOffset = 412416,
    [int]$Length = 2600,
    [uint32]$Target = 0x50065470,
    [uint32]$ImageBase = 0x50000000
)

$bytes = [System.IO.File]::ReadAllBytes($Dll)

function Get-F32([uint32]$v) {
    $bb = New-Object byte[] 4
    $bb[0] = [byte]($v -band 0xFF)
    $bb[1] = [byte](($v -shr 8) -band 0xFF)
    $bb[2] = [byte](($v -shr 16) -band 0xFF)
    $bb[3] = [byte](($v -shr 24) -band 0xFF)
    return [BitConverter]::ToSingle($bb, 0)
}

# --- pass 1: locate every CALL rel32 whose target is the row initializer ---
# Done by scanning each byte offset for 0xE8 and computing the destination.
# This is alignment-independent, so operand bytes that happen to look like
# opcodes cannot desynchronise the sweep.
$callOffsets = New-Object System.Collections.ArrayList
for ($i = 0; $i -lt ($Length - 5); $i++) {
    if ($bytes[$StartOffset + $i] -ne 0xE8) { continue }
    $rel = [int][BitConverter]::ToInt32($bytes, $StartOffset + $i + 1)
    $va = [int64]$ImageBase + [int64]($StartOffset + $i)
    $dest = [uint32](($va + 5 + $rel) -band 0xFFFFFFFFL)
    if ($dest -eq $Target) { [void]$callOffsets.Add($StartOffset + $i) }
}

# --- pass 2: walk forward from the end of each call to the next, collecting
# the PUSH immediates and the MOV ECX,imm32 that form this call's arguments ---
$records = New-Object System.Collections.ArrayList
$prevEnd = $StartOffset

foreach ($callOff in $callOffsets) {
    $pushes = New-Object System.Collections.ArrayList
    $curEcx = $null
    $i = $prevEnd

    while ($i -lt $callOff) {
        $op = $bytes[$i]
        if ($op -eq 0x6A) {                 # PUSH imm8
            [void]$pushes.Add([uint32]$bytes[$i + 1]); $i += 2
        }
        elseif ($op -eq 0x68) {             # PUSH imm32
            [void]$pushes.Add([BitConverter]::ToUInt32($bytes, $i + 1)); $i += 5
        }
        elseif ($op -eq 0xB9) {             # MOV ECX, imm32
            $curEcx = [BitConverter]::ToUInt32($bytes, $i + 1); $i += 5
        }
        else { $i++ }
    }

    $args = @($pushes.ToArray())
    [array]::Reverse($args)                 # pushes are right-to-left: last push == arg1

    $va = [int64]$ImageBase + [int64]$callOff
    [void]$records.Add([pscustomobject]@{
        Site = ('0x{0:X8}' -f [uint32]($va -band 0xFFFFFFFFL))
        Ecx  = $curEcx
        Args = $args
    })
    $prevEnd = $callOff + 5
}

Write-Host "decoded $($records.Count) weapon-table registrations`n"

# arg index (1-based) -> row offset, from the initializer's store list
$argOffset = @{
    5='+0x004'; 6='+0x008'; 7='+0x00C'; 10='+0x010'
    1='+0x014(str)'; 2='+0x054(str)'; 3='+0x094(str)'; 16='+0x0D4(str)'
    4='+0x114'; 8='+0x118'; 9='+0x11C'; 12='+0x120'
    13='+0x124'; 11='+0x128'; 14='+0x12C'; 15='+0x130'
    17='+0x144'; 18='+0x148'
}

# In this PE, RVA == file offset for the mapped image, so string pointers
# convert directly: file_off = VA - ImageBase.
function Get-CStr([uint32]$va, [int]$max = 64) {
    $off = [int64]$va - [int64]$ImageBase
    if ($off -lt 0 -or $off -ge $bytes.Length) { return '<out-of-range>' }
    $s = New-Object System.Text.StringBuilder
    for ($k = 0; $k -lt $max; $k++) {
        $c = $bytes[$off + $k]
        if ($c -eq 0) { break }
        [void]$s.Append([char]$c)
    }
    return $s.ToString()
}

# --- output ---
$hdr = '{0,-4} {1,-14} {2,-12} {3,-12} {4,-8} {5,-8} {6,-8} {7,-8} {8,-8} {9,-8}' -f `
    'row','name(a2)','fire(a11)','altfire(a14)','a5','a6','a13','a15','delayA(+118)','delayB(+11C)'
Write-Host $hdr
Write-Host ('-' * $hdr.Length)

$idx = 0
foreach ($r in $records) {
    $ra = $r.Args

    function A([int]$n) {
        if ($script:ra.Count -ge $n) { return [uint32]$script:ra[$n - 1] }
        return [uint32]0
    }
    $script:ra = $ra

    $name = Get-CStr (A 2)
    $fire = A 11
    $alt = A 14
    $a5v = A 5; $a6v = A 6; $a13v = A 13; $a15v = A 15
    $dA = A 8; $dB = A 9      # +0x118 / +0x11C : the two fire-delay slots

    Write-Host ('{0,-4} {1,-14} 0x{2:X8} 0x{3:X8} {4,-8} {5,-8} {6,-8} {7,-8} {8,-8} {9,-8}' -f `
        $idx, $name, $fire, $alt, (Get-F32 $a5v), (Get-F32 $a6v), (Get-F32 $a13v), (Get-F32 $a15v), `
        (Get-F32 $dA), (Get-F32 $dB))
    $idx++
}