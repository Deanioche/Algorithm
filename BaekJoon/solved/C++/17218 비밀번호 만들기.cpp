#include <iostream>
using namespace std;

string S[42][42];

int main()
{
	string A, B;
	cin >> A >> B;

	for (int i = 0; i <= A.size(); i++)
		for (int j = 0; j <= B.size(); j++)
			if (i == 0 || j == 0) S[i][j] = "";
			else
			{
				if (A[i - 1] == B[j - 1]) S[i][j] = S[i - 1][j - 1] + A[i - 1];
				else 
					S[i][j] = (S[i - 1][j].size() < S[i][j - 1].size() ? S[i][j - 1] : S[i - 1][j]);
			}

	cout << S[A.size()][B.size()];
}