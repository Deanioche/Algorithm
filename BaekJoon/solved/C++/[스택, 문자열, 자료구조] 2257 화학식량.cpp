#include <iostream>
#include <string.h>
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

char S[101], c, A[128];
int i, N;

int cal(char end)
{
    int r = 0;
    while((c = S[i++]) && c != end)
    {
        N = S[i] - '0';
        if (c == '(') r += cal(')');
        else if (A[c]) // c가 H, O, C 중 하나면
        {
            int n = A[c];
            if (2 <= N && N <= 9) n *= (N);
            r += n;
        }
    }
    N = S[i] - '0';
    if (end == ')' && 2 <= N && N <= 9) r *= (N);
    return r;
}

void BOJ_2257()
{
    // 화학식량 H = 1, C = 12, O = 16
    A['H'] = 1, A['C'] = 12, A['O'] = 16;
    fgets(S, 101, stdin);
    cout << cal('\0');
}

int main()
{
    FIO;
    BOJ_2257();
}