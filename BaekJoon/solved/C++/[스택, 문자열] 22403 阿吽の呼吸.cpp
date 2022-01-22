#include <iostream>
#include <stack>
using namespace std;

void BOJ_22403()
{
    stack<string> s;
    int N;
    string S;
    cin >> N;
    while (N--)
    {
        cin >> S;
        if (s.empty() && S[0] != 'A')
        {
            s.push(S);
            break;
        }
        else 
            S[0] != 'A' ? s.pop() : s.push(S);
    }
    cout << (s.size() == 0 ? "YES" : "NO");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    BOJ_22403();
}