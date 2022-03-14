#include <iostream>
#include <deque>
using namespace std;

void BOJ_1835()
{
	int N;
	cin >> N;
	deque<int> D;
	D.push_front(N--);
	while (N > 0)
	{
		D.push_front(N--);
		for (int i = 0; i <= N; i++)
			D.push_front(D.back()), D.pop_back();
	}
	while (!D.empty())
		cout << D.front() << " ", D.pop_front();
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	BOJ_1835();
	return (0);
}