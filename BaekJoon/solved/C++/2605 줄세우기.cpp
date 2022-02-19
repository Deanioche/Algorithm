#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int s;
    int tmp;
    cin >> s;
    vector<int> N(s);
    for (int i = 0; i < s; i++)
        N[i] = i + 1;
    for (int i = 0; i < s; i++)
    {
        int ticket;
        cin >> ticket;
        int tmp2 = N[i];
        for (int j = i; j > i - ticket; j--)
        {
            N[j] = N[j - 1];
        }
        N[i - ticket] = tmp2;
    }
    for (int i = 0; i < s; i++)
    {
        cout << N[i] << " ";
    }
}