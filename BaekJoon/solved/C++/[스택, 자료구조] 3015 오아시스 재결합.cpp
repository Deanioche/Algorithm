#include <iostream>
#include <stack>
using namespace std;

void BOJ_3015()
{
    int N;
    cin >> N;
    stack<pair<int, int>> s;
    long long result = 0;

    for (int i = 0; i < N; i++)
    {
        int H;
        cin >> H;
        while (!s.empty() && s.top().first < H)
        {
            result += s.top().second;
            s.pop();
        }

        if (s.empty())
            s.push({H, 1});
        else
        {
            if (s.top().first == H)
            {
                pair<int, int> cur = s.top();
                s.pop();
                result += cur.second;
                if (!s.empty())
                    result++;
                cur.second++;
                s.push(cur);
            }

            else
            {
                s.push({H, 1});
                result++;
            }
        }
    }

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    BOJ_3015();
}