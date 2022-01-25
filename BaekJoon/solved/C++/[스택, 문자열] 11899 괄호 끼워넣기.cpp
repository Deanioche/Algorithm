#include <iostream>
#include <stack>
using namespace std;

void BOJ_11899()
{
    stack<char> s, t;
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); i++)
        if (S[i] == '(') s.push(S[i]);
        else !s.empty() ? s.pop() : t.push(S[i]);
    cout << s.size() + t.size();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    BOJ_11899();
}