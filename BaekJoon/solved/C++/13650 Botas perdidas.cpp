#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int B[31][2], N, R, S;
    char C;

    while (cin >> N)
    {
        memset(B, 0, sizeof(B));
        for (int i = 0; i < N; i++)
        {
            scanf("%d %c", &S, &C);
            if (C == 'E') B[S - 30][0]++;
            else B[S - 30][1]++;
        }
        R = 0;
        for (int i = 0; i < 31; i++)
            R += min(B[i][0], B[i][1]);
        printf("%d\n", R);
    }

    return 0;
}

/*
4
40 D
41 E
41 D
40 E
6
38 E
39 E
40 D
38 D
40 D
37 E
*/