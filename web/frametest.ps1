# frametest.ps1 - drive trynew.js across candidate framings and read the
# server console after each attempt (the console is the oracle).

param([int]$First = 1, [int]$Last = 12)

$exe = "C:\Users\User\q2work\sof2\web\trynew.js"
$read = "C:\Users\User\q2work\sof2\tools\readconsole.exe"

function Restart-Server {
	Get-Process SoF -ErrorAction SilentlyContinue | Stop-Process -Force -ErrorAction SilentlyContinue
	Start-Sleep 2
	Start-Process -FilePath "C:\Users\User\Soldier of Fortune\SoF.exe" `
		-ArgumentList "+set","dedicated","1","+set","sv_maxclients","16","+map","dm/nycdm1" `
		-WorkingDirectory "C:\Users\User\Soldier of Fortune"
	Start-Sleep 30
}

function Console-Lines {
	$p = Get-Process SoF -ErrorAction SilentlyContinue | Select-Object -First 1
	if (-not $p) { return @() }
	$o = & $read $p.Id 2000 2>&1
	return @($o | Where-Object { $_.Trim() -ne "" })
}

Restart-Server
$base = Console-Lines
"console baseline lines: $($base.Count)"

for ($m = $First; $m -le $Last; $m++) {
	$out = & node $exe $m 2>&1
	$lines = Console-Lines
	$new = $lines | Select-Object -Skip $base.Count
	$hit = $new | Where-Object { $_ -match 'New\(\)|not valid|different level|Configstrings|Baselines|Ghoul|underflow' }
	$pkts = ($out | Where-Object { $_ -match 'PKT' }) -join " | "
	"mode {0,2}: +{1} console lines | {2}" -f $m, ($new.Count), ($(if ($hit) { $hit -join ' ~ ' } else { "(no marker)" }))
	if ($pkts) { "         packets: $pkts" }
	$base = $lines
}
Get-Process SoF -ErrorAction SilentlyContinue | Stop-Process -Force -ErrorAction SilentlyContinue
"done"
