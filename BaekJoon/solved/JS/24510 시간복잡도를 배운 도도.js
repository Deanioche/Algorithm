let I = (require('fs').readFileSync(0, 'utf-8') + '').trim().split("\n").slice(1);

let M = 0;
for (S of I)
    M = Math.max(M, S.match(/while|for/g).length || 0);
console.log(M);