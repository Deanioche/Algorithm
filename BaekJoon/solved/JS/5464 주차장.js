let I = require("fs").readFileSync("./dev/stdin").toString().split("\n");

num = I[0].split(" ")
const N = +num[0];
const M = +num[1];

I = I.slice(1).map(e => +e);

let Q = [0], front = 0, rear = 0;

const push = (data) => {
    rear++;
    Q[rear] = data;
}

const pop = () => {
	front++;
	return Q[front];
}

const BOJ_5464 = () => {
    let W = I.slice(N, N + M); 
    let car = I.slice(N + M);
    let ans = 0;
    let park = I.slice(0, N).map(e => [0, e]);

    for (let i = 0; i < M*2; i++)
    {
        let lot = 0;
        if (car[i] < 0) {
            while (lot < N && park[lot][0] != -car[i]) 
                lot++;
            park[lot][0] = 0;
            if (front != rear)
            {
                park[lot][0] = pop();
                ans += park[lot][1] * W[park[lot][0] - 1];
            }
        }
        else {
            push(car[i]);
            while (lot < N && park[lot][0]) 
                lot++;
            if (lot < N)
            {
                park[lot][0] = pop();
                ans += park[lot][1] * W[park[lot][0] - 1];
            }
        }
    }
    console.log(ans);
}

BOJ_5464();