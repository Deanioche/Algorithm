#include <iostream>
#include <string>
using namespace std;

int GCD(int a, int b)
{
	if (a % b == 0)
		return b;
	return GCD(b, a % b);
}

int main(void)
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	string s;
	cin >> s;

	int N = 0, M = 0;
	bool flag = false;
	int digit = 1;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] == ':')
		{
			flag = true;
			digit = 1;
		}
		else
		{
			if (!flag)
			{
				M += (s[i] - '0') * digit;
				digit *= 10;
			}
			else
			{
				N += (s[i] - '0') * digit;
				digit *= 10;
			}
		}
	}
	int gcd = GCD(N, M);
	cout << N / gcd << ":" << M / gcd << "\n";
	return 0;
}