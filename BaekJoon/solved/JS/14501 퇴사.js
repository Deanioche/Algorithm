let I = (require('fs').readFileSync(0, 'utf-8') + '').trim().split('\n');

let N = +I[0];
let TP = I.slice(1).map(v => v.split(' ').map(e => +e));
let DP = new Array(16).fill(0);

TP.forEach((v, i) => {
    let [day, earn] = v;
    if (day + i > N) return;
    DP[i] += earn;
    for (let j = i + day; j < N; j++) DP[j] = Math.max(DP[i], DP[j]);
});

console.log(Math.max(...DP));