#include <iostream>
#include <map>

using namespace std;

void BOJ_17219()
{
	map<string, string> m;
	string S, P;
	int N, M;
	cin >> N >> M;
	while (N--)
	{
		cin >> S >> P;
		m[S] = P;
	}
	while (M--)
	{
		cin >> S;
		cout << m[S] << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	BOJ_17219();
	return (0);
}