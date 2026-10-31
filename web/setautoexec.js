const fs = require("fs");
const body = [
	"// register with our own GameSpy/SOCKS5 master",
	'set net_socksEnabled "1"',
	'set net_socksServer "127.0.0.1"',
	'set net_socksPort "6678"',
	""
].join("\r\n");
for (const p of [
	"C:/Users/User/Soldier of Fortune/autoexec.cfg",
	"C:/Users/User/Soldier of Fortune/User/autoexec.cfg"
]) {
	fs.writeFileSync(p, body);
}
console.log("autoexec.cfg -> master on 127.0.0.1:6678");
