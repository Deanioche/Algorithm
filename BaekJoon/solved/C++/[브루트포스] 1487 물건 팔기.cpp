#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

int check(int n)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
        if (v[i].first >= n && n - v[i].second > 0)
            sum += n - v[i].second;
    return sum;
}

void BOJ_1487()
{
    pair<int, int> max = make_pair(0, 0);
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first - v[i].second > 0)
        {
            int tmp = check(v[i].first);
            if (max.second < tmp)
                max = make_pair(v[i].first, tmp);
        }
    }
    cout << max.first;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    BOJ_1487();
}