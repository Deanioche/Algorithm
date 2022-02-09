const fs = require("fs");
let input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const BOJ_5076 = () => {
    let i = 0;
    while ((S = input[i++]) != "#")
    {
        let stk = [];
        for (let i = 0, l = S.length; i < l; i++)
        {
            if (S[i] == '<')
            {
                let inner = S.slice(++i, S.indexOf('>', i));
                if (inner == "br /")
                {
                    i += 5;
                    continue;
                }
                let idx = inner.indexOf(' ')
                let tag = idx == -1 ? inner : inner.slice(0, idx);
                if (inner[0] == '/')
                {
                    let size = stk.length;
                    if (!size || stk[size-1] !== inner.slice(1))
                    {
                        stk.push(1);
                        break;
                    }
                    stk.pop();
                }
                else stk.push(tag);

                i += inner.length + 1;
            }
        }
        console.log(stk.length ? "illegal" : "legal");
    }
}

BOJ_5076();