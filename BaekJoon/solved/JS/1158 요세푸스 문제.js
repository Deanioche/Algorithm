let I = (require('fs').readFileSync(0, 'utf-8') + '').trim().split(" ").map(e => +e);
let R = [], i = 0, Q = new Array(I[0]).fill(0).map((v, x) => x + 1);
while (Q.length){
    i += I[1] - 1;
    i %= Q.length;
    R.push (Q.splice(i, 1)[0]);
}
console.log(`<${R.join(', ')}>`);