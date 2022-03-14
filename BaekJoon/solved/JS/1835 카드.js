let I = +(require('fs').readFileSync(0, 'utf-8') + '').trim();

let F=1000, B=999;
let L = new Array(2000).fill(0);

const push_front = (v) => {
    L[--F] = v;
}
const pop_front = () => {
    let R = L[F];
    L[F++] = 0;
    return R;
}
const pop_back = () => {
    let R = L[B];
    L[B--] = 0;
    return R;
}

function BOJ_1835()
{
	push_front(I--);
	while (I > 0)
	{
		push_front(I--);
		for (let i = 0; i <= I; i++)
			push_front(L[B]), pop_back();
	}
    S = ""
	while (F <= B)
		S += `${L[F]} `, pop_front();
    console.log(S);
}

BOJ_1835();