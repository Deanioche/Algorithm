let I = (require('fs').readFileSync(0, 'utf-8') + '').trim();
console.log(I.split('').map((v, i) => I.slice(i)).sort().join('\n'));