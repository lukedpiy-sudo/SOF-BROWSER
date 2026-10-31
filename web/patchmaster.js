const fs = require("fs");
let c = fs.readFileSync("gsmaster.js", "utf8");
const helper = [
	'const args = parseArgs(process.argv);',
	'const LOG = args.log || "C:/Users/User/AppData/Local/Temp/opencode/gsmaster.log";',
	'function say() {',
	'\tconst line = Array.prototype.join.call(arguments, " ");',
	'\tconsole.log(line);',
	'\ttry { fs.appendFileSync(LOG, line + "\\n"); } catch (e) { }',
	'}',
	''
].join("\n");
c = c.replace("const args = parseArgs(process.argv);", helper);
c = c.split('console.log("[gs]').join('say("[gs]');
c = c.replace('else if (a === "--store") out.store = argv[++i];', 'else if (a === "--store") out.store = argv[++i];\n\t\telse if (a === "--log") out.log = argv[++i];');
fs.writeFileSync("gsmaster.js", c);
console.log("gsmaster.js now logs to a file");
