#include <iostream>
#include <stack>

using namespace std;

stack<char> s, p;

void BOJ_12511()
{
    int T, cnt = 0;
    cin >> T;
    while (cnt++ < T)
    {
        int C, D, N;
        string c, d;
        char n;
        cin >> C;
        if (C) cin >> c;
        cin >> D;
        if (D) cin >> d;
        cin >> N;

        for (int i = 0; i < N; i++)
        {
            cin >> n;

            if (s.empty())
                s.push(n);

            // combination
            else if ((s.top() == c[0] && n == c[1]) || (s.top() == c[1] && n == c[0]))
                s.pop(), s.push(c[2]);

            // opposed
            else if (n == d[1] || n == d[0])
            {
                int swt = 0;
                while (!s.empty()) 
                {
                    if ((s.top() == d[0] && n == d[1]) || (s.top() == d[1] && n == d[0]))
                    {
                        swt = 1; 
                        break;
                    }
                    p.push(s.top());
                    s.pop();
                }
                if (swt)
                {
                    while (!s.empty()) s.pop();
                    while (!p.empty()) p.pop();
                }
                else
                {
                    while (!p.empty()) s.push(p.top()), p.pop();
                    s.push(n);
                }
            }
            else s.push(n);
        }

        // print
        while (!s.empty()) p.push(s.top()), s.pop();
        cout << "Case #" << cnt << ": [";

        while (!p.empty())
        {
            cout << p.top(), p.pop();
            if (!p.empty()) cout << ", ";
        }
        cout << "]\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    BOJ_12511();
}