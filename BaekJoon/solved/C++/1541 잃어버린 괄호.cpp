#include <stdio.h>
using namespace std;

void BOJ_1541()
{
    int N, S, M = 0;
    char C;
    for (scanf("%d", &S); scanf("%C", &C), C != 10;)
    {
        if (C == '-')
            M = 1;
        scanf("%d", &N);
        if (M)
            S -= N;
        else
            S += N;
    }
    printf("%d", S);
}

int main(void)
{
    BOJ_1541();
}