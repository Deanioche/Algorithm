#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    while (N--)
    {
        string a;
        string b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();

        for (int i = 0; i < a.size(); i++)
            for (int j = 0; j < b.size(); j++)
                if (a[i] == b[j])
                {
                    a[i] = ' ', b[j] = '_';
                    n--, m--;
                    break;
                }

        if (n + m)
            cout << "Impossible\n";
        else
            cout << "Possible\n";
    }
}