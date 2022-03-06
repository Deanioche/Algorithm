let I = (require('fs').readFileSync(0, 'utf-8') + '').split("\n");
console.log((I[1] + ' ' + I[2]).split(' ').map(e => +e).sort((a, b) => a - b).join(' '));