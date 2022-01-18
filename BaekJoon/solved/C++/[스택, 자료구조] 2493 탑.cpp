#include <iostream>
#include <stack>

using namespace std;

void BOJ_2493()
{
    int n, tw, idx = 1;
    stack<pair<int, int> > s;
    cin >> n;
    while (n--)
    {
        cin >> tw; // 새 타워 높이 입력
        while (!s.empty()) // 스택에 뭔가 있으면
        {
            if (s.top().second > tw) // 바로 직전 타워 높이와 비교해서 작으면
            {
                cout << s.top().first << " "; // 직전 타워의 인덱스 출력
                break;
            }
            s.pop(); // 직전 타워 스택에서 제거
        }
        if (s.empty()) // 스택이 비었으면 0 출력
            cout << "0 ";
        s.push(make_pair(idx++, tw)); // 새 타워 높이를 인덱스와 함께 스택에 push
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    BOJ_2493();
}