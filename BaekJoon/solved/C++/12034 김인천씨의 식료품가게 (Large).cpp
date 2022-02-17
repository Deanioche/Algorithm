#include <iostream>
#include <queue>

using namespace std;

int check(int a, int b)
{
	return (a == b/4*3);
}

void BOJ_12034()
{
	int T, I = 1;
	cin >> T;
	while (I <= T)
	{
		queue <int> Q, R;
		int N, P;
		cin >> N;
		for (int i = 0; i < N*2; i++)
		{
			cin >> P;
			if (!Q.empty())
			{
				if (check(Q.front(), P))
				{
					R.push(Q.front());
					Q.pop();
				}
				else Q.push(P);
			}
			else Q.push(P);
		}
		cout << "Case #" << I++ << ": ";
		while (!R.empty())
		{
			cout << R.front() << " ";
			R.pop();
		}
		cout << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	BOJ_12034();
	return (0);
}