#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
	int N;
	cin >> N;
	vector<int> A;
	vector<int> B;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		A.push_back(a);
	}
	for (int i = 0; i < N; i++) {
		int b;
		cin >> b;
		B.push_back(b);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int answer = 0;
	for (int i = 0; i < N; i++) {
		answer += A[i] * B[N -1 - i];
	}
	cout << answer;
}