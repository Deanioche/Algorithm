let I = (require('fs').readFileSync(0, 'utf-8') + '');
console.log(I.split('-')
    .map(e=> e.split('+')
    .reduce((a,v) => +v+a,0))
    .reduce((a,v)=>a-v)
    )