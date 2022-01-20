#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
int r[1000010], A[1000010];
int N;

void BOJ_17298()
{
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = N - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= A[i])
            s.pop();
        
        if (s.empty()) r[i] = -1;
        else r[i] = s.top();
        
        s.push(A[i]);
    }

    for (int i = 0; i < N; i++)
        cout << r[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    BOJ_17298();
}