/*
 * mkmasterpatch.js - make a copy of the dedicated server that talks to our
 * own master instead of the dead master.gamespy.com.
 *
 * The engine hard codes the master address in two places (.rdata):
 *   0x2015a830  (the UDP heartbeat channel, port 27900)
 *   0x2015a918  (the TCP list channel, port 28900)
 * We rewrite both to 127.0.0.1; the original SoF.exe is left untouched.
 */
const fs = require("fs");

const src = "C:/Users/User/Soldier of Fortune/SoF.exe";
const dst = "C:/Users/User/Soldier of Fortune/SoFTest.exe";
const b = fs.readFileSync(src);
const needle = Buffer.from("master.gamespy.com\0", "latin1");
/* the replacement must be NUL terminated and the rest of the field zeroed,
 * otherwise the tail of the old string stays and inet_addr() gets a bogus
 * address */
const repl = Buffer.alloc(needle.length, 0);
Buffer.from("127.0.0.1\0", "latin1").copy(repl, 0);

let count = 0;
let i = 0;
while (true) {
	const at = b.indexOf(needle, i);
	if (at < 0) break;
	repl.copy(b, at);
	/* keep the original NUL so the string ends here */
	count++;
	i = at + needle.length;
}
fs.writeFileSync(dst, b);
console.log("wrote " + dst + " (" + count + " master address(es) redirected to 127.0.0.1)");
