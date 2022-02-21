let I = (require('fs').readFileSync(0, 'utf-8') + '').trim().split(" ");
let L = [], f = 0;

for (let i = 0, l = I.length; i < l; i++)
{
    if (L[I[i]] == undefined)
        L[I[i]] = 1;
    else
    {
        f = 1;
        break;
    }
}
console.log(f ? "no" : "yes");