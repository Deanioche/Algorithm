#include <iostream>
using namespace std;

void BOJ_1120()
{
    int c, s = 51;
    string A, B;
    cin >> A >> B;
    for (int i = 0; i <= B.size() - A.size(); i++)
    {
        c = 0;
        for (int j = 0; j < A.size(); j++)
            if (A[j] != B[j + i])
                c++;
        if (c < s) s = c;
    }
    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    BOJ_1120();
}