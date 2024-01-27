let [N, B] = (require('fs').readFileSync(0, 'utf-8') + '').split(" ").map(e => +e);

let C = 1, i = 1, A = 0;
while (i <= B) {
    for (let j = 1; j <= C; j++) {
        if (i >= N && i <= B) A += C;
        i++;
    }
    C++;
}

console.log(A);