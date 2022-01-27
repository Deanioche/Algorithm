#include <iostream>
#include <stack>
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

pair <char, int> p[27];
stack <double> stk;
int N, num;
string s;

int search(char c)
{
    for(int i = 0; i < N; i++)
        if (p[i].first == c)
            return p[i].second;
    return 0;
}

void BOJ_1935()
{
    cin >> N;
    cin >> s;
    int idx = -1;
    while(++idx < N)
        cin >> num, p[idx] = {'A' + idx, num};

    for(int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i])) stk.push(search(s[i]));
        else
        {
            double b = stk.top();
            stk.pop();
            double a = stk.top();
            stk.pop();
            double r;
            if(s[i] == '*') r = a * b;
            else if(s[i] == '+') r = a + b;
            else if(s[i] == '-') r = a - b;
            else if(s[i] == '/') r = a / b;
            stk.push(r);
            printf("# %.2f %c %.2f = %.2f\n", a, s[i], b, r);
        }
    }
    printf("%.2f", stk.top());
}

int main()
{
    FIO;
    BOJ_1935();
}