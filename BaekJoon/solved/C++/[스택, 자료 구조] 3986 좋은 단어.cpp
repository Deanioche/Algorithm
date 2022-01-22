#include <iostream>
#include <stack>
using namespace std;

void BOJ_3986()
{
    int N, r = 0;
    cin >> N;

    while (N--)
    {
        stack<char> s;
        string str;
        cin >> str;

        int n = str.size();

        if (n % 2 == 1)
            continue;

        for (int i = 0; i < n; i++)
        {
            if (s.empty())
                s.push(str[i]);
            else
            {
                if (s.top() == str[i])
                    s.pop();
                else
                    s.push(str[i]);
            }
        }
        if (s.empty())
            r++;
    }
    cout << r;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    BOJ_3986();
}