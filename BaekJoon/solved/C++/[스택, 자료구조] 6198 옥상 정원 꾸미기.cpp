#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
int n, b;
long long int r = 0;

void BOJ_6198()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        while (!s.empty())
        {
            if (s.top() > b)
                break;
            s.pop();
        }
        r += (long long int)s.size();
        s.push(b);
    }
    cout << r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    BOJ_6198();
}