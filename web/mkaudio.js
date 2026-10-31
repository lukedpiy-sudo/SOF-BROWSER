/*
 * mkaudio.js - copy the audio decoders into the browser's directory.
 *
 * web/audiodec.js is the module (CommonJS for Node, and it works in the
 * browser as well), but the relay only serves web/www, so the browser needs
 * a copy of it next to the page.  This is the same pattern as
 * web/mkbundle.js, which bundles web/sofproto.js into web/www/bundle.js.
 *
 *   node web/mkaudio.js
 */
"use strict";
const fs = require("fs");
const path = require("path");
const src = path.join(__dirname, "audiodec.js");
const dst = path.join(__dirname, "www", "audiodec.js");
const body = fs.readFileSync(src);
fs.writeFileSync(dst, body);
console.log("wrote " + dst + " (" + body.length + " bytes) from " + src);
