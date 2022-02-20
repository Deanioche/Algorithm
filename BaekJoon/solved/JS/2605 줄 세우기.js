let I = (require('fs').readFileSync(0, 'utf-8') + '').trim().split('\n');

let N = +I[0];
let S = I[1].split(" ");
let L = new Array(N).fill(0).map((v, i) => i + 1);

for (let i = 0; i < N; i++)
{
    let tk = i - S[i];
    let tmp = L[i];
    for(let j = i; j > tk; j--)
        L[j] = L[j - 1];
    L[tk] = tmp;
}
console.log(L.join(" "));