#include <iostream>
#include <string>
using namespace std;
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

string S, B, r;

void BOJ_9935()
{
    getline(cin, S);
    getline(cin, B);
    int b = B.size() - 1; // 폭탄의 최대 인덱스
    for (int i = 0; i < S.size(); i++)
    {
        r += S[i];
        if (r[r.size() - 1] == B[b])
        {
            if (r.size() >= B.size())
            {
                int cnt = 1;// 16번 줄 if 문이 동작했으니 맨 끝 글자 하나는 맞는 것이므로 cnt는 1부터 시작,
                // 폭탄의 나머지 글자들을 역순으로 비교하며 일치하면 cnt++
                for (int j = b - 1; j >= 0; j--)
                    if (r[r.size() - (b - j) - 1] == B[j])
                        cnt++;
                // cnt가 폭탄문자의 길이와 일치하면 폭탄이 존재하는 것이므로 제거.
                if (B.size() == cnt)
                    for (int j = 0; j < B.size(); j++)
                        r.pop_back();
            }
        }
    }
    cout << (r.size() > 0 ? r : "FRULA");
}

int main()
{
    FIO;
    BOJ_9935();
}