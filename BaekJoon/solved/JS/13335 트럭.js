let I = require("fs").readFileSync("./dev/stdin").toString().split("\n");

const [N, W, L] = I[0].split(" ").map(e => +e);
let A = I[1].split(" ").map(e => +e);

let Q = new Array(1001).fill(0);
let front = 0, rear = 0;
let time = 0, total = 0;

const push = (data) => {
    Q[rear] = data;
    rear++;
}

const pop = () => {
    return Q[front++];
}

for (let i = 0; i < N; i++)
{
    while(1)
    {
        if ((rear - front) == W)
        {
            total -= Q[front];
            pop();
        }
        if (total + A[i] <= L) break;
        push(0);
        time++;
    }
    push(A[i]);
    total += A[i];
    time++;
}

console.log(time + W); 