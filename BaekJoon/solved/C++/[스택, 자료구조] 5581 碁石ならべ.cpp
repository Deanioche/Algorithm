#include <iostream>
#include <vector>
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<pair<int, int>> s;
int n, u, c;

void BOJ_5581()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> u;
        if (i % 2) // 홀수면
        {
            // 전과 같은 색이면 
            if (!s.empty() && s.back().first == u)
            {
                pair<int, int> p = s.back();
                s.pop_back();
                // 돌색, 연속된 같은 색 돌 개수+1
                s.push_back({p.first, p.second + 1}); 
            }
            else
                s.push_back({u, 1});
        }
        else // 짝수면
        {
            if (s.back().first == u)
            {
                pair<int, int> p = s.back();
                s.pop_back();
                // 돌색, 연속된 같은 색 돌 개수 + 1
                s.push_back({p.first, p.second + 1}); 
            }
            else // 짝순데 돌 색이 다르면!
            {
                pair<int, int> p = s.back(); // 다른 색 돌 개수 뽑아오기
                s.pop_back();
                if (s.empty()) // 비었으면 그냥 돌 색깔 바꿔서 개수 + 1 하고 push
                    s.push_back({u, p.second + 1});
                else
                {
                    pair<int, int> q = s.back();
                    s.pop_back();
                    // 000111 이고, 지금 들어온 돌(u)가 0이라면,
                    // 스택에는 {0, 3}, {1, 3} 이렇게 있을것이고
                    // 1 세개가 모두 0으로 바뀌기 때문에
                    // 백돌(0) : p.second = 3
                    // 흑돌(1) : q.second = 3
                    // 지금 들어온 돌(0) : u = 1
                    // 즉, 스택에는 {0, 7} 이렇게 다시 들어가게 된다.
                    s.push_back({u, p.second + q.second + 1});
                }
            }
        }
    }
    c = 0;
    while (!s.empty())
    {
        pair<int, int> p = s.back();
        if (p.first == 0)
            c += p.second;
        s.pop_back();
    }
    cout << c;
}

int main()
{
    FIO;
    BOJ_5581();
}