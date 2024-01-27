let I = (require('fs').readFileSync(0, 'utf-8') + '').trim().split("\n");

let N = +I[0], t = 0;
let C = I[1].split(" ").map(e => +e);

while (N)
    for (let i = 0; i < +I[0]; i++)
    {
        if(C[i] > 0) C[i]--, t++;
        if(!C[i]) C[i] = -t, N--;
    }
console.log(C.map(e => -e).join(" "));