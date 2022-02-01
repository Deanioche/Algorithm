#include <iostream>
using namespace std;
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void BOJ_15829()
{
    long long int r = 0;
    char c[51];
    int N;
    cin >> N >> c;
    for (int i = N - 1; i >= 0; i--)
        r = (c[i] - 96 + r * 31) % 1234567891;
    cout << r;
}

int main()
{
    FIO;
    BOJ_15829();
}
