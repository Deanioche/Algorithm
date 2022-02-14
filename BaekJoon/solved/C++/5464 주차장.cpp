#include <stdio.h>

int N, M;
int queue[2010]; // 주차할 차량
int park[105][2];//주차 공간/요금
int wei[2010]; //차량 무게
int front, rear;

void push(int data)
{
	rear++;
	rear %= 2010;
	queue[rear] = data;
}

int pop()
{
	front++;
	front %= 2010;
	return queue[front];
}

void BOJ_5464()
{
    scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%d", &park[i][1]); //무게당 요금
	for (int i = 1; i <= M; i++)
		scanf("%d", &wei[i]); //차량 당 무게

	long long int ans = 0; //총 수입
	M *= 2;
	for (int i = 0; i < M; i++)
	{
		int a;
		scanf("%d", &a);
		int lot = 0;
		if (a < 0) //주차장 나감
		{
			a *= -1;
			while (park[lot][0] != a) lot++; //나갈 차량
			park[lot][0] = 0;
			if (front != rear) //큐에 차량이 있으면 주차시키기
			{
				park[lot][0] = pop();
				ans += park[lot][1] * wei[park[lot][0]];
			}
		}
		else //주차장 들어옴
		{
			push(a);
			while (park[lot][0] != 0 && lot < N) lot++; //빈공간 찾기
			if(lot < N) //주차공간 있음
			{
				park[lot][0] = pop();
				ans += park[lot][1] * wei[park[lot][0]];
			}
		}
	}

	printf("%lld\n", ans);
}

int main()
{
    BOJ_5464();
    return (0);
}