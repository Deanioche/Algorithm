#include <stdio.h>
#include <stack>

using namespace std;
stack<int> A, B, C;

void BOJ_5957()
{
    int N, x, y;
    scanf("%d", &N);
    for (int i = N; i >= 1; i--) A.push(i);
    while (scanf("%d%d", &x, &y) != EOF)
    {
        if (x == 1)
        {
            while (y--)
            {
                B.push(A.top());
                A.pop();
            }
        }
        else
        {
            while (y--)
            {
                C.push(B.top());
                B.pop();
            }
        }
        if (C.size() == N) break;
    }
    while (!C.empty())
    {
        printf("%d\n", C.top()); 
        C.pop();
    }
}

int main()
{
    BOJ_5957();
    return (0);
}