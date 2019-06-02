#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

enum
{
	False, True
};

void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int Partition(int arr[], int left, int right)
{

	int pos = arr[left];
	int low = left + 1, hight = right;
	while (low <= hight)
	{
		while (low <= right&&arr[low] <= pos)
			low++;
		while (hight >= (left + 1) && arr[hight] >= pos)
			hight--;
		if (low <= hight)
			Swap(&arr[low], &arr[hight]);
	}
	Swap(&arr[left], &arr[hight]);
	return hight;
}

int QuickSelect(int arr[], int left, int right, int select)
{
	if (select > 0 && select <= right - left + 1)
	{
		int pos = Partition(arr, left, right);

		if (pos - left == select - 1)
			return arr[pos];
		
		else if (pos - left > select - 1)
			return QuickSelect(arr, left, pos - 1, select);
		
		else
			return QuickSelect(arr, pos + 1, right, select - pos + left - 1);
	}
	return -1;
}

void DeleteDuplicatedElementsInArr(int * arr, int* arrCapacity)
{
	int* uniqueArr = (int*)calloc(*arrCapacity, sizeof(int));
	int uniqueArrCount = 0;
	int i;
	for (i = 0; i < *arrCapacity; i++)
	{
		if (!SearchKeyInArr(uniqueArr, uniqueArrCount, arr[i]))
			uniqueArr[uniqueArrCount++] = arr[i];
	}
	memset(arr, 0, sizeof(arr[0])*(*arrCapacity));
	for (i = 0; i < uniqueArrCount; i++)
		arr[i] = uniqueArr[i];
	if (uniqueArr)
	{
		free(uniqueArr);
		uniqueArr = NULL;
	}
	*arrCapacity = uniqueArrCount;
}

int SearchKeyInArr(int* arr, int arrCapacity, int key)
{
	int i;
	for (i = 0; i < arrCapacity; i++)
	{
		if (arr[i] == key)
			return True;
	}
	return False;
}

int main(int argc, char* argv[])
{
	srand(time(NULL));
	int n, index, arrCapacity;
	int *arr = NULL;
	printf("배열 크기 : ");
	scanf_s("%d", &n);
	printf("몇 번째 크기의 원소 : ");
	scanf_s("%d", &index);

	arr = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n + 1;
		arrCapacity = i + 1;
	}

	DeleteDuplicatedElementsInArr(arr, &arrCapacity);

	printf("%d 번째 크기의 원소 : %d\n", index, QuickSelect(arr, 0, arrCapacity - 1, index));

	printf("\n");
	printf("%d번째에서 앞에 있는 10개의 수\n", index);
	for (int i = index - 2; i > index - 12; i--)
		printf("%d번째 = %d\n",i+1, arr[i]);
	printf("\n\n");

	printf("%d번째에서 뒤에 있는 10개의 수\n", index);
	for (int i = index ; i < index + 10; i++)
		printf("%d번째 = %d\n", i + 1, arr[i]);
	printf("\n");

	return 0;
}