let I = require("fs").readFileSync("./dev/stdin").toString().split("\n");

for (let i = 1, x = 1; i <= I[0]; i++, x += 2)
{
    let Q = [], front = 0, rear = 0;
    let R = [];
    let N = I[x];
    let P = I[x + 1].split(" ").map(e => +e);
    for (let j = 0; j < N*2; j++)
    {
        if (front == rear)
        {
            Q.push(P[j]);
            rear++;
        }
        else
        {
            if(Q[front] == P[j]/4*3)
            {
                R.push(Q[front]);
                front++;
            }
            else
            {
                Q.push(P[j]);
                rear++;
            }
        }
    }
    console.log(`Case #${i}: ${R.join(" ")}`);
}