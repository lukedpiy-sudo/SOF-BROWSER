# bsp_inspect.ps1 - parse a Quake2-lineage BSP header + lump directory.
#
# Purpose: determine whether stock Q2 3.21 can load a Soldier of Fortune map.
# Compares the file against the dheader_t / lump layout in q_shared.h.

param(
    [string]$Bsp = 'C:\Users\User\Soldier of Fortune\User\maps\dm\beta17.bsp',
    [int]$Q2Version = 38
)

$b = [System.IO.File]::ReadAllBytes($Bsp)

$ident = [System.Text.Encoding]::ASCII.GetString($b, 0, 4)
$ver = [BitConverter]::ToInt32($b, 4)

Write-Host "file      : $Bsp"
Write-Host "size      : $($b.Length) bytes"
Write-Host ("ident     : '{0}'" -f $ident)
Write-Host "version   : $ver"
Write-Host "Q2 3.21   : $Q2Version"
if ($ver -ne $Q2Version) {
    Write-Host "  >>> VERSION MISMATCH <<<"
}
Write-Host ''

# dheader_t (Q2): char ident[4]; int version; int entities; int planes;
#                  int textures; int vertexes; int visibility;
#                  int normals; int lightmaps; int models; int sounds;
#                  int map; int graph; int areas;
# = 4 + 13*4 = 56 bytes, i.e. 15 dwords total
$names = @('entities','planes','textures','vertexes','visibility','normals',
           'lightmaps','models','sounds','map','graph','areas','brushsides')

$nl = [BitConverter]::ToInt32($b, 8)
Write-Host ("numlumps  : {0}" -f $nl)
Write-Host ''

if ($nl -gt 0 -and $nl -lt 64) {
    Write-Host '{0,-14} {1,-8} {2,-12} {3}' -f 'lump','offset','length','expected'
    Write-Host ('-' * 52)
    for ($i = 0; $i -lt $nl; $i++) {
        $o = 12 + $i * 8
        $off = [BitConverter]::ToInt32($b, $o)
        $len = [BitConverter]::ToInt32($b, $o + 4)
        $exp = if ($i -lt $names.Count) { $names[$i] } else { "(extra $i)" }

        $flag = ''
        if ($off -lt 0 -or $len -lt 0 -or ([int64]$off + $len) -gt $b.Length) {
            $flag = '  <-- OUT OF RANGE'
        }
        Write-Host ('{0,-14} 0x{1:X6}  0x{2:X7}   {3}{4}' -f $exp, $off, $len, $exp, $flag)
    }
}

Write-Host ''
Write-Host "=== first 16 bytes (hex) ==="
Write-Host (($b[0..15] | ForEach-Object { $_.ToString('x2') }) -join ' ')