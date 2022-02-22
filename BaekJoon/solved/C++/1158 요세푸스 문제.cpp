#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
    int N, K, k;
    scanf("%d %d", &N, &K);

    queue <int> Q, R;
    
    for (int i = 0; i < N; i++)
        Q.push(i + 1);

    while (!Q.empty())
    {
        k = K - 1;
        while (k-- > 0)
        {
            Q.push(Q.front());
            Q.pop();
        }
        R.push(Q.front());
        Q.pop();
    }
    printf("<");
    while(!R.empty()){
        printf("%d", R.front()), R.pop();
        if (R.size() > 0) printf(", ");    
    }
    printf(">");
        
}