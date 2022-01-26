#include <iostream>
#include <stack>
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void BOJ_15815()
{
    string str;
    stack<int> stk;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int n = str[i] - '0';
        if (0 <= n && n <= 9)
            stk.push(n);
        else
        {
            int b = stk.top(); stk.pop();
            int a = stk.top(); stk.pop();
            int r;
            if (str[i] == '*') r = a * b;
            else if (str[i] == '+') r = a + b;
            else if (str[i] == '-') r = a - b;
            else if (str[i] == '/') r = a / b;
            stk.push(r);
        }
    }
    cout << stk.top();
}

int main()
{
    FIO;
    BOJ_15815();
}