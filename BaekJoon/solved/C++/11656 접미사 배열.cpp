#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	string S;
	cin >> S;
	int L = S.size();
	string A[L];
	for (int i = 0; i < L; i++)
	{
		string s;
		for (int j = i; j < L; j++)
			s += S[j];
		A[i] = s;
	}
	sort(A, A+L);
	for (int i = 0; i < L; i++)
		cout << A[i] << "\n";
}