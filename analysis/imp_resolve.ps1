# Resolve gamex86.dll IAT slot VA -> imported function name; dump full import list of that DLL
param([string]$Target = '0x5015cb34')
$p = 'C:\Users\User\q2work\sof2\sof_target\gamex86.dll'
$bytes = [System.IO.File]::ReadAllBytes($p)
function u16($o){ $bytes[$o] + ($bytes[$o+1] -shl 8) }
function u32($o){ [int64]($bytes[$o]) + ([int64]$bytes[$o+1] -shl 8) + ([int64]$bytes[$o+2] -shl 16) + ([int64]$bytes[$o+3] -shl 24) }
$peOff = u32 0x3C
$ImageBase = u32 ($peOff + 52)
$secOff = $peOff + 20 + (u16 ($peOff+4))
$secCount = u16 ($peOff + 6)
$secs = @()
for($i=0;$i -lt $secCount;$i++){
  $o = $secOff + $i*40
  $secs += [pscustomobject]@{ Name=([System.Text.Encoding]::ASCII.GetString($bytes[$o..($o+7)])).Trim([char]0); VA=u32 ($o+12); RawSize=u32 ($o+16); Raw=u32 ($o+20) }
}
function va2raw($va){
  $rva = $va - $ImageBase
  foreach($s in $secs){ if($rva -ge $s.VA -and $rva -lt ($s.VA + $s.RawSize)){ return $s.Raw + ($rva - $s.VA) } }
  return -1
}
function str($raw){ if($raw -lt 0){return ''}; $e=$raw; while($bytes[$e] -ne 0){$e++}; return [System.Text.Encoding]::ASCII.GetString($bytes[$raw..($e-1)]) }
$ddOff = $peOff + 20 + (u16 ($peOff+16))
$impRVA = u32 ($ddOff + 8)
$impRaw = va2raw ($ImageBase + $impRVA)
$target = [Convert]::ToInt64($Target,16)
$targetDll = ''
$out = @()
$desc = $impRaw
while((u32 $desc) -ne 0){
  $dll = str (va2raw ($ImageBase + (u32 ($desc+4))))
  $firstThunk = u32 ($desc+8)
  $i = 0
  while($true){
    $slotRaw = va2raw ($ImageBase + $firstThunk + $i*4)
    if($slotRaw -lt 0){ break }
    $t = u32 $slotRaw
    if($t -eq 0){ break }
    if(($t -band 0x80000000) -eq 0){
      $nm = str ((va2raw ($ImageBase + $t)) + 2)
    } else { $nm = 'ord' + ($t -band 0xFFFF) }
    $slotVA = $ImageBase + $firstThunk + $i*4
    $out += ("{0:X8}  {1}  {2}" -f $slotVA, $dll, $nm)
    if($slotVA -eq $target){ $targetDll = $dll }
    $i++
  }
  $desc += 20
}
"ImageBase=0x{0:X8}" -f $ImageBase
"TARGET=$target"
($out | Where-Object { $_ -match ("^\{0:X8\}" -f $target) })
"--- imports from targetDll ---"
$out | Where-Object { $_ -match ("  " + $targetDll + "  ") }
