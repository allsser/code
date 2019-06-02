#include <stdio.h>
#include "header.h"

int multiply(int x, int y)
{
	int result = x*y;
	return result;
}

int getUserInput(void)
{
	int num;
	printf("input a number(2~9) : ");
	scanf("%d", &num);

	return num;
}

void printGugudan(int dan)
{
	int i;
	if (2 <= dan && dan <= 9)
	{
		for (i = 1; i <= 9; i++)
		{
			int result = multiply(dan, i);
			printf("%d * %d = %2d\n", dan, i, result);
		}
	}
	else
		return 0;
}

void printGugudanAll(void)
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 9; j++)
			printf("%d * %d = %2d   ", j, i, multiply(j, i));
		printf("\n");
	}
}
