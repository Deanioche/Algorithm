let I = (require('fs').readFileSync(0, 'utf-8') + '').split("\n");
I.shift();
let L = I[0] + ' ' + I[1];
console.log(L.split(" ").map(e => +e).sort((a, b) => a - b).join(" "));