#include <stdio.h>
#include <queue>
using namespace std;

void BOJ_15235()
{
    queue<pair<int, int>> Q;
    int N, C, t = 0, R[1001] = {};
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &C);
        Q.push({i, C});
    }

    while (!Q.empty())
    {
        t++;
        Q.front().second--;
        if (Q.front().second == 0)
        {
            R[Q.front().first] = t;
            Q.pop();
        }
        else
        {
            Q.push(Q.front());
            Q.pop();
        }
    }
    for (int i = 1; i <= N; i++)
        printf("%d ", R[i]);

}

int main(void)
{
    BOJ_15235();
}