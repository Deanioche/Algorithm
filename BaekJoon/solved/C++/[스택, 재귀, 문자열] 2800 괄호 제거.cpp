#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <set>
using namespace std;

vector<int> open, close;
set<string> s;
string str;
bool ok[200];

void dfs(int idx, int cnt)
{
    if (idx == open.size())
    {
        if (cnt > 0)
        {
            string temp = "";
            for (int i = 0; i < str.size(); i++)
                if (ok[i])
                    temp += str[i];
            s.insert(temp);
        }
        return;
    }
    //삭제X
    dfs(idx + 1, cnt);
    //삭제
    ok[open[idx]] = false;
    ok[close[idx]] = false;
    dfs(idx + 1, cnt + 1);
    ok[open[idx]] = true;
    ok[close[idx]] = true;
}

void BOJ_2800()
{
    stack<int> st;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        //초기화
        ok[i] = true;

        char c = str[i];
        if (c == '(') st.push(i);
        else if (c == ')')
        {
            int oidx = st.top();
            st.pop();
            open.push_back(oidx);
            close.push_back(i);
        }
    }
    dfs(0, 0);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    BOJ_2800();
    return (0);
}