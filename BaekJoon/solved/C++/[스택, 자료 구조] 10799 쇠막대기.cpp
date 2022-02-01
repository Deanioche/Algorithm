#include <iostream>
using namespace std;
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

char c[100001];
int P, o;
// P = 총 파이프의 개수
// o = 열린 파이프 개수

void BOJ_10799()
{
    cin >> c;
    for (int i = 0; c[i] && i < 100001; i++)
        if (c[i] == '(')
            if (c[i + 1] == ')') P += o, i++;
            else o++;
        else o--, P++;
    P += o;
    cout << P;
}

int main()
{
    FIO;
    BOJ_10799();
}

// '('이고 다음이 ')'가 아니면 열린 파이프 개수 + 1
// '()' 이면 열린 파이프 개수를 P에 저장