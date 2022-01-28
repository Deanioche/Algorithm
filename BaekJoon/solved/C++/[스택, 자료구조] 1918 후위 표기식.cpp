#include <iostream>
#include <stack>
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

stack<char> stk;
string s;

void BOJ_1918()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        // 영문자는 바로 출력
        if (isalpha(s[i]))
            cout << s[i];
        else
        {
            // 열리는 괄호 바로 스택에 담기
            if (s[i] == '(')
                stk.push(s[i]);
            // 연산 우선순위가 높은 '*', '/'부터 연산 시작
            else if (s[i] == '*' || s[i] == '/')
            {
                // 스택이 비거나 연산자가'*', '/'가 아닐 때까지 출력 및 pop시킨다. 
                // 괄호가 있지 않는 이상 '*', '/'는 최우선 연산 순위를 가지므로 알파벳 다음으로 우선 출력된다.
                while (!stk.empty() && (stk.top() == '*' || stk.top() == '/'))
                    cout << stk.top(), stk.pop();
                stk.push(s[i]);
            }
            // '+', '-'일때,
            else if (s[i] == '+' || s[i] == '-')
            {
                // 스택이 비거나, 열리는 괄호가 나올 때까지 연산자 출력 & pop
                // 열린 괄호가 나오면 괄호 안의 계산이 끝난것이므로 연산자 출력을 중단한다.
                // s[i]의 '+' 또는 '-' 연산자는 스택 안의 다른 연산자가 모두 출력된 뒤에서야 스택에 담긴다.
                while (!stk.empty() && stk.top() != '(')
                    cout << stk.top(), stk.pop();
                stk.push(s[i]);
            }
            // 괄호가 닫히면
            else if (s[i] == ')')
            {
                // 괄호가 열리는 부분까지 모든 연산자 출력
                while (!stk.empty() && stk.top() != '(')
                    cout << stk.top(), stk.pop();
                stk.pop();
            }
        }
    }
    // 스택에 남아있는 연산자 모두 출력.
    while (!stk.empty())
        cout << stk.top(), stk.pop();
}

int main()
{
    FIO;
    BOJ_1918();
}