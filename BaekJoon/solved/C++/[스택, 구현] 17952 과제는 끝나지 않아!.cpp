#include <iostream>
#include <stack>
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

struct p {
    int val, time;
};

void BOJ_17952()
{
    int N, ans = 0;
    stack<p> s;
    cin >> N;
    while (N--)
    {   
        int S, A, T; cin >> S;
        if(S)
        {
            cin >> A >> T;
            s.push(p{A, T});
        }
        if (s.empty()) continue;
        s.top().time--;
        if (s.top().time == 0)
            ans += s.top().val, s.pop();
    }
    cout << ans;
}

int main()
{
    FIO;
    BOJ_17952();
}