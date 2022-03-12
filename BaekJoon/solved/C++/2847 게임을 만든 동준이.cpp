#include <iostream>
using namespace std;

void BOJ_2847()
{
	int N, i, R = 0, S[100];
	cin >> N;
	for (i = 0; i < N; i++)
		cin >> S[i];
	while (i --> 1)
		if (S[i] <= S[i-1]){
			int n = S[i-1] - S[i] + 1;
			S[i-1] -= n;
			R += n;
		}
	cout << R;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	BOJ_2847();
	return (0);
}