const http = require("http");
http.get("http://127.0.0.1:9222/json/list", (r) => {
  let b = ""; r.on("data", d => b += d); r.on("end", () => {
    const list = JSON.parse(b);
    list.forEach(t => console.log(t.type, "|", t.id, "|", t.url.slice(0, 70)));
  });
});
