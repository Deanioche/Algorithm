#include <iostream>
#include "limits.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    // 계산 3트
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        long long c, S = 0, o = 0;
        while (n--)
        {
            cin >> c;
            // 둘다 양수에, S + c 가 long long 극한값을 넘기면 오버플로우 + 1
            if (S > 0 && c > 0 && S > LLONG_MAX - c)
                o++, S += c;
            // 둘다 음수면 오버플 - 1
            else if (S < 0 && c < 0 && S < LLONG_MIN - c)
                o--, S += c;
            else
                S += c;
        }
        char p;
        if (o > 0)
            p = '+';
        else if (o < 0)
            p = '-';
        else
            p = (S == 0 ? '0' : (S > 0 ? '+' : '-'));
        cout << p << "\n";
    }
}