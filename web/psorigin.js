const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const sock = dgram.createSocket("udp4");
let n = 0;
const client = createClient({
  send: (b) => sock.send(b, 29000, "127.0.0.1"),
  onEvent: (name, data) => {
    if (name !== "frame") return;
    if (n++ % 30) return;
    console.log("playerState:", data.frame.playerState ? data.frame.playerState.length : "none",
      " playerOrigin:", JSON.stringify(data.frame.playerOrigin || null));
  }
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => client.start());
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => process.exit(0), 12000);
