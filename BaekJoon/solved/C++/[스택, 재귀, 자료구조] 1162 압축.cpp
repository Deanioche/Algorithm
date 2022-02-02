#include <iostream>
using namespace std;
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// 전역변수에 선언한 이유는 재귀함수 돌리면서도 편하게 호출하기 위해서.
string S;
int i;

int BOJ_1162(int N, char end)
{
    int r = 0;
		char c;
		// end가 나올 때까지 반복
    while ((c = S[i++]) != end) 
    {
				// c의 다음 인덱스가 '('이면
        if (S[i] == '(')
						// 1. i++로 '('를 넘김
						// 2. ')'가 나오면 끝나는 함수를 시작
						// 3. 리턴 된 괄호안의 문자 갯수를 r에 더하기.
            i++, r += BOJ_1162(c - '0', ')');

				// 현재 인덱스가 '('를 가리킬 때를 제외하고, 
				// 현재 함수(괄호 안)의 문자의 길이++
        else if (c != '(') r++;
    }
		// 괄호 앞의 숫자와 곱한 뒤 리턴.
    return (r * N);
}

int main()
{
    FIO;
    getline(cin, S);
		// 가장 바깥의 문자열을 NULL로 종료되는 (괄호 없는)괄호 안의 문자열 1개로 취급.
    cout << BOJ_1162(1, '\0');
}