let I = (require('fs').readFileSync(0, 'utf-8') + '').trim().split(" ").map(e => +e);

const BOJ_2960 = () => {
    let L = new Array(I[0] + 1).fill(1);
    let C = 1, i, j;
    for (i = 2; i <= I[0]; i++)
        for (j = 1; i * j <= I[0]; j++) {
            if (L[i * j]) {
                if (C == I[1]) {
                    console.log(i * j);
                    return;
                }
                L[i * j] = 0;
                C++;
            }
        }
}

BOJ_2960();