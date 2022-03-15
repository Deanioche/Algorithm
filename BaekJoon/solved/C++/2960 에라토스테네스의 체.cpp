#include <cstdio>
using namespace std;

void BOJ_2960(){
	bool L[1001] = {0,};
    int C = 1, i, j, N, K;
	scanf("%d %d", &N, &K);
    for (i = 2; i <= N; i++)
        for (j = 1; i * j <= N; j++) {
            if (!L[i * j]) {
                if (C == K) {
                    printf("%d", i * j);
                    return;
                }
                L[i * j] = 1;
                C++;
            }
        }
}

int main(void)
{
	BOJ_2960();
}