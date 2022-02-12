#include <bits/stdc++.h>
using namespace std;

void BOJ_18258()
{
    queue <int> Q;
    int N;
    cin >> N;
    while (N--)
    {
        string S;
        cin >> S;
        if (S == "push")
        {
            int num;
            cin >> num;
            Q.push(num);
        }
        else if (S == "front")
            cout << (Q.size() ? Q.front() : -1) << "\n";
        else if (S == "back")
            cout << (Q.size() ? Q.back() : -1) << "\n";
        else if (S == "size")
            cout << Q.size() << "\n";
        else if (S == "empty")
            cout << (Q.size() ? 0 : 1) << "\n";
        else if (S == "pop"){
            if (Q.size())
                cout << Q.front() << "\n", Q.pop();
            else { cout << -1 << "\n"; }
        }
    }
}

int main(void) 
{
    ios::sync_with_stdio(0), cin.tie(0);
    BOJ_18258();
    return (0);
}