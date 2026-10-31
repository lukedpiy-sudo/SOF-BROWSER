$ErrorActionPreference = "Stop"
# run the engine's usercmd writer for a list of vectors and dump the bit strings
$tool = "C:\Users\User\q2work\sof2\tools\cmdw.exe"
$vectors = @(
  "0,0,0,0,0,0,0,0",
  "1,0,0,0,0,0,0,0",
  "50,0,0,0,0,0,0,0",
  "50,1,0,0,0,0,0,0",
  "50,0,100,0,0,0,0,0",
  "50,0,0,200,0,0,0,0",
  "50,0,0,0,30,0,0,0",
  "50,0,0,0,0,5,0,0",
  "50,0,100,200,30,5,6,7",
  "50,2,100,200,30,5,6,7",
  "100,0,0,0,0,0,0,0",
  "255,0,0,0,0,0,0,0"
)
$out = @()
foreach ($v in $vectors) {
  $args = $v.Split(",")
  $o = & $tool @args 2>&1 | Out-String
  $m = [regex]::Match($o, "bits:([01]*)")
  $b = if ($m.Success) { $m.Groups[1].Value } else { "ERR" }
  $out += "$v=$b"
}
$out -join "`n" | Set-Content "C:\Users\User\q2work\sof2\web\cmdvectors.txt" -Encoding ASCII
"wrote " + $out.Count + " vectors"
