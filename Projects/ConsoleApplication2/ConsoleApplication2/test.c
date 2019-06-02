#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
enum 
{
	False,True
};

void DeleteDuplicatedElementsInArr(int* arr, int* arrCapacity);
int SearchKeyInArr(int* arr, int arrCapacity, int key);
void PrintArr(int* arr, int arrCapacity);

int main(int argc, char* argv[])
{
	srand(time(NULL));
	int n,index, arrCapacity=0;
	int *arr = NULL;
	printf("배열 크기 : ");
	scanf_s("%d", &n);

	arr = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n+1;
		arrCapacity = i+1;
		printf("arr[%d] = %d\n", i, arr[i]);
	}

		printf("중복 값 제거 전의 정수 배열\n");
		PrintArr(arr, arrCapacity);
		DeleteDuplicatedElementsInArr(arr, &arrCapacity);
		printf("\n중복 값 제거 후의 정수 배열\n");
		PrintArr(arr, arrCapacity);
	
	return 0;
}
void DeleteDuplicatedElementsInArr(int * arr, int* arrCapacity)
{
	int* uniqueArr = (int*)calloc(*arrCapacity, sizeof(int));
	int uniqueArrCount = 0;
	int i;
	for (i = 0; i < *arrCapacity; i++)
	{
		if (!SearchKeyInArr(uniqueArr, uniqueArrCount, arr[i]))
		{
			uniqueArr[uniqueArrCount++] = arr[i];
		}
	}
	memset(arr, 0, sizeof(arr[0])*(*arrCapacity));
	for (i = 0; i < uniqueArrCount; i++)
	{
		arr[i] = uniqueArr[i];
	}
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
		{
			return True;
		}
	}
	return False;
}

void PrintArr(int* arr, int arrCapacity)
{
	int i;
	for (i = 0; i < arrCapacity; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}