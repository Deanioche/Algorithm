let I = (require('fs').readFileSync(0, 'utf-8') + '').split("\n");
let [N, M] = I[0].split(" ").map(e=>+e);
let L = [], R = "", i = 1;
for (; i <= N; i++)
{
    let S = I[i].split(" ");
    L[S[0]] = S[1];
}
for (; i <= N + M; i++) R += L[I[i]] + "\n";
console.log(R);