#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

void BOJ_15926()
{
    string S;
    stack<int> stk;
    int N, res = 0;
    cin >> N >> S;
    stk.push(-1);

    for(int i = 0; i < N; i++)
    {
        if (S[i] == '(') stk.push(i);
        else
        {
            stk.pop();
            if (!stk.empty()) res = max(res, i - stk.top());
            else stk.push(i); 
        }
    }
    cout << res;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    BOJ_15926();
    return (0);
}