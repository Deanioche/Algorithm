#include <iostream>
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

char c[40][3], d[30][2], s[99], n;
int T, C, D, N, cnt = 0;

void BOJ_12512()
{
    cin >> T;
    while (cnt++ < T)
    {
        cin >> C;
        for(int i = 1; i <= C; i++)
            cin >> c[i];
        cin >> D;
        for(int i = 1; i <= D; i++)
            cin >> d[i];
        cin >> N;
        int r = 0;
        while(N--)
        {
            cin >> n;
            int chk = 0;

            for (int i = 1; i <= C && !chk; i++)
                if(r > 0 && 
                    (n == c[i][1] && s[r] == c[i][0]) ||
                    (n == c[i][0] && s[r] == c[i][1]))
                        chk = 1, s[r] = c[i][2];
                
            if(chk) continue;

            for (int i = 1; i <= D && !chk; i++){
                if (n == d[i][1]){
                    for (int j = 1; j <= r && !chk; j++)
                        if (s[j] == d[i][0])
                            r = 0, chk = 1;
                }
                if (n == d[i][0]){
                    for (int j = 1; j <= r && !chk; j++)
                        if (s[j] == d[i][1])
                            r = 0, chk = 1;
                }
            }

            if(chk) continue;

            s[++r] = n;
        }
        cout << "Case #" << cnt << ": [";
        for (int i = 1; i <= r; i++)
        {
            cout << s[i];
            if(i != r) cout << ", ";
        }
        cout << "]\n";
    }
}

int main()
{
    FIO;
    BOJ_12512();
}