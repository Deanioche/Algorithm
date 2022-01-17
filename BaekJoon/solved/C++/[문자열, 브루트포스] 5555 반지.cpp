#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int N, r = 0;
    cin >> s >> N;

    while (N--)
    {
        string a;
        cin >> a;
        a += a;
        if (a.find(s) != string::npos)
            r++;
    }

    cout << r;
}