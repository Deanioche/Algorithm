#include <stdio.h>
using namespace std;

int a[3004];
int i, j = 1, k;
void BOJ_1292()
{
    for (i = 1; j <= 1000; i++)
    {
        for (k = 0; k < i; k++)
        {
            a[j] += a[j - 1] + i;
            j++;
        }
    }
    scanf("%d %d", &i, &j);
    printf("%d", a[j] - a[i - 1]);
}

int main()
{
    BOJ_1292();
}