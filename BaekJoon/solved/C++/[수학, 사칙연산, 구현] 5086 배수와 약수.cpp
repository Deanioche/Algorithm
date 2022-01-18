#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int a, b;
        cin >> a >> b;
        if (!(a + b))
            break;

        string s;
        if (a < b && b % a == 0)
            s = "factor\n";
        else if (a > b && a % b == 0)
            s = "multiple\n";
        else
            s = "neither\n";
        cout << s;
    }
}