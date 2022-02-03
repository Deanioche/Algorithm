#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int N, i, j, flag;
vector<string> t_list, sorted_list;
stack<string> s;

// 비교함수
// 알파벳 비교한 뒤, 뒤 정수 문자열을 int로 변환해 비교한다.
bool cmp(string &a, string &b)
{
    string alpha = a.substr(0, 1);
    string alpha2 = b.substr(0, 1);
    int num1 = stoi(a.substr(2));
    int num2 = stoi(b.substr(2));
    if (alpha == alpha2)
        return num1 < num2;
    return a < b;
}

int main()
{
    cin >> N;
    for (int i = 0; i < N * 5; i++)
    {
        string ticket;
        cin >> ticket;
        t_list.push_back(ticket);
    }
    // 순서 체크를 위해 정렬된 티켓리스트가 필요하다.
    sorted_list = t_list;
    sort(sorted_list.begin(), sorted_list.end(), cmp);

    // 정렬과 비정렬 리스트 중 어느 한 쪽이 끝날때 까지 비교
    while (i < 5 * N && j < 5 * N)
    {
        // 두 리스트 순서가 일치하면 둘다++
        if (t_list[i] == sorted_list[j])
            i++, j++;
        // 스택에서 맞는 순번을 찾은 경우 pop()후 정렬 리스트++
        else if (!s.empty() && s.top() == sorted_list[j])
            s.pop(), j++;
        // 순서가 안맞으면 스택에 저장
        else s.push(t_list[i++]);
    }

    // 스택에 남은걸 마저 비교하며 틀린게 나오면 바로 break.
    while (!s.empty())
    {
        if (s.top() != sorted_list[j++])
        {
            flag = 1;
            break;
        }
        s.pop();
    }

    cout << (flag ? "BAD" : "GOOD");
    return (0);
}