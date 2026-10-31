const dgram=require("dgram");const {createClient}=require("./sofproto.js");const {decodePlayerState}=require("./playerstate.js");
const sock=dgram.createSocket("udp4");let t0=Date.now(),last=null,first=null;
const MS = parseInt(process.argv[2] || "16", 10);
const c=createClient({cmdPatchRing:(cmd)=>{cmd[0]=MS;},send:(b)=>sock.send(b,29000,"127.0.0.1"),onEvent:(n,d)=>{if(n!=="frame")return;const f=d.frame;if(!f.playerState)return;const st=decodePlayerState(f.playerState,0);if(!st.origin)return;const o=st.origin.map(v=>v.toFixed(0)).join(",");if(o===last)return;last=o;if(!first){first=o;console.log("start "+o);}else console.log("["+((Date.now()-t0)/1000).toFixed(1)+"s] "+o);}});
sock.on("message",m=>c.onDatagram(m));sock.bind(0,"0.0.0.0",()=>{c.start();t0=Date.now();});
setTimeout(()=>{console.log("--- walking (KeyW, 12 s)");c.setKey("KeyW",true);},6000);
setInterval(()=>{if(c.spawnDone)c.sendUserCmd();},50);
setTimeout(()=>{console.log("--- done");process.exit(0);},22000);
