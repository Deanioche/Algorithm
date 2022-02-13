#include <iostream>
#include <queue>

int main(void)
{
	std::queue<int> Q;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		Q.push(i);
	while(!Q.empty())
	{
		printf("%d ", Q.front());
		Q.pop();
		Q.push(Q.front());
		Q.pop();
	}
	return (0);
}