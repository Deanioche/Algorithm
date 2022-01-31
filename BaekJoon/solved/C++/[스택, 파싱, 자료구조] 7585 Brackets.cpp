#include <iostream>
#include <stack>
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

char S[3001];
char o;

void BOJ_7585()
{
    while (true)
    {
        stack<char> s;
        int i = 0;
        fgets(S, 3000, stdin);
        // getline(cin, S);
        if (S[0] == '#') break;
        while ((o = S[i++]))
        {
            if (o == '(' || o == '{' || o == '[') s.push(o);
            else if (!s.empty() && (o == ')' || o == '}' || o == ']'))
            {
                if (o == ')' && s.top() == '(') s.pop();
                else if (o == '}' && s.top() == '{') s.pop();
                else if (o == ']' && s.top() == '[') s.pop();
                else
                {
                    s.push('-'); break;
                } 
            }
        }
        cout << (s.empty() ? "Legal\n" : "Illegal\n");
    }
}

int main()
{
    FIO;
    BOJ_7585();
}