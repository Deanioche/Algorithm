#include <iostream>
#include <vector>

using namespace std;

int N, K;
string num;
vector<char> V;

void BOJ_2812()
{
    cin >> N >> K >> num;
    int i = 0;
    while (i < num.length())
    {
        // 새로운 값이 들어오면 vector 안의 모든 수와 비교해 가능한 가장 앞쪽에 놓는다.
        while (K != 0 && !V.empty() && V.back() < num[i])
        {
            // 새로운 값보다 작으면 제거
            V.pop_back();
            K--; // K가 0이 되면 다 지운것.
        }
        V.push_back(num[i]);
        i++;
    }
    // K가 남은 경우
    while (K--)
        V.pop_back(); // 가장 뒤 (1의 자리) 부터 지워준다.

    for (int i = 0; i < V.size(); i++)
        cout << V[i];
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    BOJ_2812();
    return (0);
}