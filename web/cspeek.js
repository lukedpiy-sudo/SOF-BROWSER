const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const sock = dgram.createSocket("udp4");
const cs = {};
let gh = null;
const client = createClient({
  send: (b) => sock.send(b, 29000, "127.0.0.1"),
  onEvent: (name, data) => {
    if (name === "configstrings") { Object.keys(data).forEach(k => cs[k] = data[k]); return; }
    if (name === "ghoulstrings" && gh === null) { gh = data; return; }
    if (name === "frame") {
      [38, 102, 104, 0, 1].forEach(k => console.log("cs[" + k + "] = " + JSON.stringify(cs[k])));
      if (gh) {
        const keys = Object.keys(gh);
        console.log("ghoulstrings: " + keys.length + " entries");
        keys.slice(0, 8).forEach(k => console.log("  gh[" + k + "] = " + JSON.stringify(gh[k])));
      } else console.log("no ghoulstrings yet");
      process.exit(0);
    }
  }
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => client.start());
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => process.exit(0), 16000);
