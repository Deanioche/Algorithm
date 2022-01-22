#include <iostream>
#include <list>
using namespace std;

void BOJ_3986()
{
    list<int> l;
    int k, m;
    cin >> k >> m;
    for (int i = 1; i <= k; i++)
        l.push_back(i);

    std::list<int>::iterator it;
    while (m--)
    {
        int r, i = 1;
        cin >> r;
        it = l.begin();
        while (it != l.end())
        {
            if (i % r == 0)
                it = l.erase(it++);
            else
                it++;
            i++;
        }
    }
    for (auto it = l.begin(); it != l.end(); it++)
        cout << *it << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    BOJ_3986();
}