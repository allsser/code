#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	List list;
	int data;
	int sum = 0;
	ListInit(&list);

	for (int i = 1; i <= 9; i++)
		LInsert(&list, i);

	if (LFirst(&list, &data))
	{
		sum += data;

		while (LNext(&list, &data))
			sum += data;
	}
	printf("SUM = %d\n", sum);

	if (LFirst(&list, &data))
	{
		if (data % 2 == 0 || data % 3 == 0)
			LRemove(&list);

		while (LNext(&list, &data))
		{
			if (data % 2 == 0 || data % 3 == 0)
				LRemove(&list);
		}
	}

	printf("현재 남아있는 데이터의 수: %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}