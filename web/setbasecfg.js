const fs = require("fs");
/* the engine writes User\config.cfg - maybe it reads the base one */
const base = "C:/Users/User/Soldier of Fortune/config.cfg";
const body = [
	"// read early?  (the base directory config)",
	'set port "28918"',
	'set net_socksEnabled "1"',
	'set net_socksServer "127.0.0.1"',
	'set net_socksPort "6678"',
	""
].join("\r\n");
fs.writeFileSync(base, body);
console.log("wrote", base);
