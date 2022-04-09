let I = (require('fs').readFileSync(0, 'utf-8') + '').trim().split("\n");

const BOJ_13650 = () => {
    let N, R, S, C, B = new Array(31);
    while (I.length)
    {
        for (let i = 0; i < 31; i++)
            B[i] = [0, 0];
        N = I.shift()
        for (let i = 0; i < N; i++)
        {
            [S, C] = I.shift().split(" ");
            if (C == 'E') B[+S - 30][0]++;
            else B[+S - 30][1]++;
        }
        R = 0;
        for (let i = 0; i < 31; i++)
            R += Math.min(B[i][0], B[i][1]);
        console.log(R);
    }
}

BOJ_13650();