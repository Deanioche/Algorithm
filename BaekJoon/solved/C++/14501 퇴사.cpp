#include <iostream>
#include <algorithm>
using namespace std;

int N;
int T[16], P[16], dp[16];

void BOJ_14501()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> T[i] >> P[i];
    
    for (int i = N; i >= 1; i--)
    {
        if (i + T[i] - 1 > N)
        {
            dp[i] = dp[i + 1];
            continue;
        }
        dp[i] = max(dp[i + T[i]] + P[i], dp[i + 1]);
    }
    cout << dp[1] << '\n';
}

int main(void)
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    BOJ_14501();
    return (0);
}