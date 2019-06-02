#include<stdio.h>
#define N 10
#define M 9999

int a[N + 1][N + 1] = { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						{0, 0,12, M, M, M,15, M, M, M, M},
						{0,12, 0, 4,10, M, M, M, M, M, M},
						{0, M, 4, M, 0, 3,13, M, M, M, M},
						{0, M,10, 3, 0, M, M, M,10, M, M},
						{0, M, M,13, M, 0, M, M, M, M,15},
						{0,15, M, M, M, M, 0,21, 7, M, M},
						{0, M, M, M, M, M,21, 0, M,25, M},
						{0, M, M, M,10, M, 7, M, 0,19, 9},
						{0, M, M, M, M, M, M,25,19, 0, 5},
						{0, M, M, M, M,15, M, M, 9, 5, 0} };
int value[N + 1];
int f[N + 1];
int index[N + 1];


int main(int argc, char *argv[])
{
	int min, p;

	for (int n = 1; n <= N; n++)
	{
		value[n] = M;
	}
	value[1] = 0;
	for (int i = 1; i <= N; i++)
	{
		min = M;
		for (int i = 1; i <= N; i++)
		{
			if ((value[i] < min) && f[i] == 0)
			{
				min = value[i];
				p = i;
			}
		}
		f[p] = 1;
		for (int j = 1; j <= N; j++)
		{
			if (value[p] + a[p][j] < value[j])
			{
				value[j] = value[p] + a[p][j];
				index[j] = p;
			}
		}
	}
	for (int i = 1; i <= N; i++)
	{
		p = i;

		printf("서울출발 -> ");
		check1(i);
		printf("도착 \n");
		printf("최소 경로: %d\n", value[i]);

		printf("최소 경로상에 나오는 도시: ");
		check1(i);
		while (index[p])
		{
			
			check2(p);
			p = index[p];
		}
		printf("\n\n");
		puts("");
	}
}

int check1(int i)
{
	if (i== 1)
		printf("서울");
	else if (i == 2)
		printf("천안");
	else if (i == 3)
		printf("논산");
	else if (i == 4)
		printf("대전");
	else if (i == 5)
		printf("광주");
	else if (i == 6)
		printf("원주");
	else if (i == 7)
		printf("강릉");
	else if (i == 8)
		printf("대구");
	else if (i == 9)
		printf("포항");
	else
		printf("부산");
}
int check2(int p)
{
	if (index[p]==0)
		printf("");
	else if (index[p]==1)
		printf(" <- 서울");
	else if (index[p]==2)
		printf(" <- 천안");
	else if (index[p]==3)
		printf(" <- 논산");
	else if (index[p]==4)
		printf(" <- 대전");
	else if (index[p]==5)
		printf(" <- 광주");
	else if (index[p]==6)
		printf(" <- 원주");
	else if (index[p]==7)
		printf(" <- 강릉");
	else if (index[p]==8)
		printf(" <- 대구");
	else if (index[p]==9)
		printf(" <- 포항");
	else if (index[p]==10)
		printf(" <- 부산");
}