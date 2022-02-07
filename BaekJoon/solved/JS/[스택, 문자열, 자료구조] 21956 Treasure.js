const fs = require("fs");
let input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let BOJ_12511 = () => {
    // 스택
    let l = [];

    let [N, K] = input[0].split(" ").map(x => +x);
    let S = input[1];
    for (let i = 0; i < N; i++)
    {
        if (!l.length) l.push({a: S[i], b: 1});
        else if (S[i] == l[l.length-1].a)
        {
            l[l.length-1].b++;
            if (l[l.length-1].b == K) l.pop();
        }
        else l.push({a: S[i], b: 1})
    }
    res = "";
    for (let i = 0, x = l.length; i < x; i++)
        for (let j = 0; j < l[i].b; j++)
            res += l[i].a;

    console.log(res);
}

BOJ_12511();