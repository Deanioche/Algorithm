/*

Bronze II 1919 애너그램 만들기

https://www.acmicpc.net/problem/1919

*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    cin >> a >> b;
    int n = a.size() + b.size();

    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < b.size(); j++)
            if (a[i] == b[j])
                a[i] = '_', b[j] = '-', n -= 2;
    cout << n;
}