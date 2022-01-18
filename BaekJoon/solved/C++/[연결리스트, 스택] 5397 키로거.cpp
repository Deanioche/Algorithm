#include <iostream>
#include <list>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        list<char> L;

        auto c = L.end();

        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]) || isalpha(s[i]))
                L.insert(c, s[i]);
            else if (s[i] == '<' && c != L.begin())
                c--;
            else if (s[i] == '>' && c != L.end())
                c++;
            else if (s[i] == '-' && c != L.begin())
                c = L.erase(--c);
        }
        for (char c : L)
            cout << c;
        cout << "\n";
    }
}