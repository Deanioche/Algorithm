#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    string S;
    int C, R = 0;
    cin >> C;

    while (C--)
    {
        int f = 0, i = 0, pos = 0;
        cin >> S;
        while ((pos = S.find("for", i)) != string::npos)
        {
            i = pos + 3;
            f++;
        }
        i = 0;
        while ((pos = S.find("while", i)) != string::npos)
        {
            i = pos + 5;
            f++;
        }
        R = R > f ? R : f;
    }
    cout << R;
}