let I = (require('fs').readFileSync(0, 'utf-8') + '').trim();

const answer = I.match(/[a-zA-z\-]+/gi).reduce((a, b) => {
    return a.length >= b.length ? a : b;
}, '');
console.log(answer.toLowerCase());