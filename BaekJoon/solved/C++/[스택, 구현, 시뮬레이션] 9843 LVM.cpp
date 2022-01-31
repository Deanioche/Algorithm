#include <iostream>
#include <stack>
using namespace std;

#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define TP s.top(); s.pop();

void BOJ_9843()
{
    stack<int> s;
    string o;
    int N, i, r, n;
    cin >> N;

    pair<string, int> p[N];

    for (i = 0; i < N; i++)
    {
        n = 0;
        cin >> o;
        if (o == "PUSH" || o == "IFZERO") cin >> n;
        p[i] = {o, n};
    }
    i = 0;
    while (p[i].first != "DONE")
    {
        o = p[i].first; 
        n = p[i].second;

        if (o == "PUSH") s.push(n);
        else if (o == "STORE") r = s.top(), s.pop();
        else if (o == "LOAD") s.push(r);
        else if (o == "PLUS")
        {
            int a = TP;
            int b = TP;
            s.push(a + b);
        }
        else if (o == "TIMES")
        {
            int a = TP;
            int b = TP;
            s.push(a * b);
        }
        else if (o == "IFZERO")
        {
            int a = TP;
            if (a == 0) { i = n; continue; }
        }
        i++;
    }
    cout << s.top();
}

int main()
{
    FIO;
    BOJ_9843();
}