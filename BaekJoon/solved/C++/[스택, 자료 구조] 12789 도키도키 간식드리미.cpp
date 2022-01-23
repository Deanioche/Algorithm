#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void BOJ_12789()
{
    stack<int> 수택;
    queue<int> 뀨;
    int 학생수, 순서체크 = 1;
    cin >> 학생수;
    for (int 야 = 0; 야 < 학생수; 야++)
    {
        int 호;
        cin >> 호;
        뀨.push(호);
    }
    
    while(!뀨.empty())
    {
        if (뀨.front() == 순서체크) 
            순서체크++, 뀨.pop();
        else
        {
            if(!수택.empty() && 수택.top() == 순서체크)
                수택.pop(), 순서체크++;
            else
                수택.push(뀨.front()), 뀨.pop();
        }
    }
    while (!수택.empty())
    {
        if(수택.top() != 순서체크)
        {
            cout << "Sad";
            return;
        }
        수택.pop(), 순서체크++;
    }

    cout << "Nice";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    BOJ_12789();
}