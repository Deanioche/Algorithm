#include <iostream>

using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX], unused = 1, c, n;

void insert(int addr, int num)
{
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr)
{
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = pre[addr];
}

// 처음부터 끝까지 순회하며 출력
void traversal()
{
    int cur = nxt[0];
    while (cur != -1)
    {
        cout << dat[cur];
        cur = nxt[cur];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);

    string s;
    cin >> s;

    for (auto i : s)
        insert(c++, i);

    cin >> n;
    while (n--)
    {
        char o, t;
        cin >> o;
        if (o == 'P')
        {
            cin >> t;
            insert(c, t);
            c = nxt[c];
        }
        else if (o == 'L' && pre[c] != -1)
            c = pre[c];
        else if (o == 'D' && nxt[c] != -1)
            c = nxt[c];
        else if (o == 'B' && pre[c] != -1)
            erase(c), c = pre[c];
    }
    traversal(); // 출력
}