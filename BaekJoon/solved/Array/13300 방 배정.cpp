/*

Bronze II 13300 방 배정

https://www.acmicpc.net/problem/13300

*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, S, Y, c = 0;
    cin >> n >> k;
    int t[7][2] = {};

    for (int i = 0; i < n; i++)
        cin >> S >> Y, t[Y][S]++;

    for (int i = 1; i < 7; i++)
    {
        while (t[i][0] > 0)
            t[i][0] -= k, c++;
        while (t[i][1] > 0)
            t[i][1] -= k, c++;
    }
    cout << c;
}