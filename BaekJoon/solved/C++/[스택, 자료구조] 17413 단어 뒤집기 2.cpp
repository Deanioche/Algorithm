#include <iostream>
#include <stack>
#define FIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string S;
stack<char> s;
int i;

void print_stack()
{
    while (!s.empty())
        cout << s.top(), s.pop();
}

void BOJ_17413()
{
    getline(cin, S);
    while (S[i])
    {
        if (S[i] == '<')
        {
            print_stack();
            while (S[i] != '>')
                cout << S[i++];
            cout << S[i++]; // '>'까지 출력
        }

        else if (S[i] == ' ')
        {
            print_stack();
            cout << " ";
            i++;
        }
        else
            s.push(S[i++]);
    }
    print_stack();
}

int main()
{
    FIO;
    BOJ_17413();
}