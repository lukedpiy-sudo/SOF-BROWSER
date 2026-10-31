/* testbundle.js - run the browser bundle in a Node sandbox that mimics the
 * browser (no Buffer global except the shim) and check the frames it sends.
 */
const fs = require("fs");
const path = require("path");
const nativeBuffer = Buffer;

global.window = global;
global.atob = (b) => nativeBuffer.from(b, "base64").toString("binary");
global.Buffer = undefined;              // the bundle installs the shim
const src = fs.readFileSync(path.join(__dirname, "www", "bundle.js"), "latin1");
eval(src);

const sent = [];
const p = window.sofproto.createClient({
	send: (b) => {
		const u8 = (b instanceof Uint8Array) ? b : b.buf;
		sent.push(Buffer.from(u8));
	}
});
p.start();
console.log("frames sent:", sent.length);
for (const f of sent) {
	console.log("  " + f.length + " bytes: " + f.toString("hex"));
}
console.log("buffer global is the shim:", global.Buffer !== nativeBuffer);
