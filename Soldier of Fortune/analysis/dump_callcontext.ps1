# dump_callcontext.ps1 - show the instructions preceding a CALL [row+0x128/0x12C]
#
# Reconstructs the argument setup at each fire/alt-fire call site by decoding
# the preceding PUSH instructions, which is how the true prototype of the
# weapon handlers (e.g. 0x50101230) is recovered: the handlers are only ever
# reached through a function pointer, so the decompiler mis-infers them.

param(
    [string]$Dll = 'C:\Users\User\Soldier of Fortune\Base\gamex86.dll',
    [uint32]$ImageBase = 0x50000000,
    [int[]]$Sites = @(0x500F284, 0x5000BFCF, 0x500FD1C2),
    [int]$Lookback = 0x40
)

$b = [System.IO.File]::ReadAllBytes($Dll)

function Get-F32At([uint32]$va) {
    $off = [int64]$va - [int64]$ImageBase
    return [BitConverter]::ToSingle($b, [int]$off)
}

$regNames = @('eax','ecx','edx','ebx','esp','ebp','esi','edi')

foreach ($va in $Sites) {
    $callOff = [int]($va - $ImageBase)
    Write-Host ("=== call at 0x{0:X8} ===" -f $va)

    # decode instructions walking backwards is unreliable; instead decode
    # forward from (call - lookback) and keep only PUSH/MOV we can read.
    $start = $callOff - $Lookback
    $i = $start
    $end = $callOff + 6
    while ($i -lt $end) {
        $op = $b[$i]
        $cur = [uint32](([int64]$ImageBase + $i) -band 0xFFFFFFFFL)
        if ($i -ge $callOff) { break }

        if ($op -eq 0x6A) {
            Write-Host ("  0x{0:X8}  push 0x{1:X2}" -f $cur, $b[$i + 1]); $i += 2
        }
        elseif ($op -eq 0x68) {
            $v = [uint32][BitConverter]::ToUInt32($b, $i + 1)
            $fl = Get-F32At $v
            $tag = ''
            if (-not [double]::IsNaN($fl) -and [Math]::Abs($fl) -gt 1e-6 -and [Math]::Abs($fl) -lt 1e6) { $tag = "  (f32=$fl)" }
            Write-Host ("  0x{0:X8}  push 0x{1:X8}{2}" -f $cur, $v, $tag)
            $i += 5
        }
        elseif ($op -eq 0xB8) {
            Write-Host ("  0x{0:X8}  mov eax, 0x{1:X8}" -f $cur, [uint32][BitConverter]::ToUInt32($b, $i + 1)); $i += 5
        }
        elseif ($op -eq 0xB9) {
            Write-Host ("  0x{0:X8}  mov ecx, 0x{1:X8}" -f $cur, [uint32][BitConverter]::ToUInt32($b, $i + 1)); $i += 5
        }
        elseif ($op -eq 0xBA) {
            Write-Host ("  0x{0:X8}  mov edx, 0x{1:X8}" -f $cur, [uint32][BitConverter]::ToUInt32($b, $i + 1)); $i += 5
        }
        elseif ($op -eq 0xBB) {
            Write-Host ("  0x{0:X8}  mov ebx, 0x{1:X8}" -f $cur, [uint32][BitConverter]::ToUInt32($b, $i + 1)); $i += 5
        }
        elseif ($op -eq 0x83 -and $b[$i + 1] -eq 0xC4) {   # add esp, imm8
            Write-Host ("  0x{0:X8}  add esp, 0x{1:X2}" -f $cur, $b[$i + 2]); $i += 3
        }
        elseif ($op -eq 0x8B) {
            $modrm = $b[$i + 1]
            Write-Host ("  0x{0:X8}  mov (0x{1:X2}) ..." -f $cur, $modrm); $i += 2
        }
        else {
            $i++
        }
    }
    Write-Host ''
}