#include <iostream>
#include <list>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    list<char> L;

		// string을 list로 옮기기
    for (auto c : s) L.push_back(c);

		// 초기 커서 위치 
    auto c = L.end();

    int n;
    cin >> n;

    while (n--)
    {
        char o;
        cin >> o;
        if (o == 'P')
        {
            char t;
            cin >> t;
            L.insert(c, t); // 커서 위치에 삽입
        }
        else if (o == 'L' && c != L.begin())
            c--;
        else if (o == 'D' && c != L.end())
            c++;
        else if (o == 'B' && c != L.begin())
            c--, c = L.erase(c); // #1
    }
    for (auto c : L)
        cout << c;
}