#include <iostream>
#include <stack>

using namespace std;

const int S = 200010;
int arr[S];
stack<int> s[S];

int main()
{
    int N, M, k, n;
    cin >> N >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> k;
        while (k--)
        {
            cin >> n;
            s[i].push(n);
        }
        arr[s[i].top()] = i;
    }
    int c = 1;
    for (int i = 1; i <= N; i++)
    {
        if (!arr[i])
        {
            c = 0;
            break;
        }
        s[arr[i]].pop();
        if (!s[arr[i]].empty())
            arr[s[arr[i]].top()] = arr[i];
    }
    cout << (c ? "Yes" : "No");
}