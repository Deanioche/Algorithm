#include <iostream>

using namespace std;

void BOJ_16120()
{
    // PPAP -> P로 치환이 가능하다.
    int i = 0, P_cnt = 0;
    string S;
    char c;
    cin >> S;
    while((c = S[i++]))
    {
        if (c == 'P') 
        {
            P_cnt++;
            continue; // 아래 조건문을 스킵해 연산량 줄이기
        }
        // 현재 문자 c가 'A'이고 다음 문자가 'P', 앞서 나온 P가 2개 이상인 경우
        if (S[i] == 'P' && P_cnt >= 2) 
            i++, P_cnt--; // 커서를 넘기고 PPAP하나 제거
        else // 위 두 조건에 안맞으면 PPAP가 아님
        {
            cout << "NP"; 
            return ;
        }
    }
    // 결과적으로 P가 하나여야 PPAP
    cout << (P_cnt == 1 ? "PPAP" : "NP");
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    BOJ_16120();
    return (0);
}