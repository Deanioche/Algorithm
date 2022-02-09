#include <iostream>
#include <string>
#include <stack>
using namespace std;

void BOJ_5076()
{
    while (1)
    {
        string S;
        getline(cin, S);
        if (S[0] == '#') break;

        stack<string> s;
        int b, i = 0;
        char c;
        while ((c = S[i++]))
        {
            if (c == '<')
            {
                // <br /> 건너 뛰기
                if (S[i] == 'b' && S[i + 1] == 'r')
                    i += 4;
                // 닫히는 태그
                else if (S[i] == '/')
                {
                    b = ++i;
                    while (S[i] != '>')
                        i++;
                    if (s.empty() || s.top() != S.substr(b, i - b))
                    {
                        s.push("x");
                        break;
                    }
                    else s.pop();
                }
                // 열리는 태그
                else
                {
                    b = i;
                    while (S[i] != '>' && S[i] != ' ')
                        i++;
                    s.push(S.substr(b, i - b));
                }
            }
        }
        puts(s.empty() ? "legal" : "illegal");
    }
}

int main()
{
    BOJ_5076();
    return (0);
}