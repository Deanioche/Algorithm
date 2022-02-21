#include <iostream>
#include <string.h>
#include <map>

using namespace std;

map<string, int> M;

int chk(string s)
{
    if (M[s])
        return (1);
    // M.insert({s, 1}); // 중복 인서트는 second값이 달라도 무시된다?!
    M[s] = 1; // 없는 키에 값 등록이 된다?!
    return (0);
}

int main()
{
    int pos = 0, f = 0;
    string S;
    getline(cin, S);
    while ((pos = S.find(" ")) != string::npos)
    {
        f = chk(S.substr(0, pos));
        S.erase(0, pos + 1);
        if (f) break;
    }
    if (!f) f = chk(S);
    cout << (f ? "no" : "yes");
}