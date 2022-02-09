#include <bits/stdc++.h>
using namespace std;

stack<int> num;
stack<char> op;

bool is_digit(char c) {
    return '0' <= c && c <= '9';
}
void evaluate(char c) {
    int B = num.top(); num.pop();
    int A = num.top(); num.pop();
    switch (c) {
    case '+': num.push(A + B); break;
    case '-': num.push(A - B); break;
    case '<': num.push(min(A, B)); break;
    case '>': num.push(max(A, B));
    }
}
int main() {
    cin.tie(0), cout.tie(0);
    ios::sync_with_stdio(0);

    string s; cin >> s;
    size_t len = s.size();
    for (size_t i = 0; i < len; ++i) {
        // 숫자면 int형으로 바꿔 스택에 push
        if (is_digit(s[i])) {
            int val = s[i] - '0';
            auto j = i + 1;
            while (j < len && is_digit(s[j])) {
                val = val * 10 + s[j] - '0';
                ++j;
            }
            num.push(val);
            i = j - 1;
        }
        // 숫자가 아니면 연산자인데
        else switch (s[i]) {
        case '+':
        case '-':
            // 우선순위가 같은 연산자는 왼쪽 (먼저 나온 연산자)부터 계산
            while (!op.empty() && op.top() != '(')
                evaluate(op.top()), op.pop();
            op.push(s[i]);
            break;
        case '<':
        case '>':
            // 우선순위가 같은 연산자는 왼쪽 (먼저 나온 연산자)부터 계산
            while (!op.empty() && (op.top() == '<' || op.top() == '>'))
                evaluate(op.top()), op.pop();
            op.push(s[i]);
            ++i; // '?' 넘기기
            break;
        case '(': op.push('('); break;
        case ')':
            // 괄호 안 모두 계산하고 '(' 제거
            while (!op.empty() && op.top() != '(')
                evaluate(op.top()), op.pop();
            op.pop();
        }
    }
    //스택에 남은 연산자 모두 계산
    while (!op.empty())
        evaluate(op.top()), op.pop();
    cout << num.top();
    return 0;
}