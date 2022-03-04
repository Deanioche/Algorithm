#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int A[2000011];

void BOJ_11728()
{
    int N, M, i;
    scanf("%d %d", &N, &M);
    for (i = 0; i < N + M; i++)
    {
        int n;
        scanf("%d", &n);
        A[i] = n;
    }
    sort(A, A + N + M);
    for (i = 0; i < N + M; i++)
    {
        printf("%d ", A[i]);
    }
}

int main()
{
    BOJ_11728();
}