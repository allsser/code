#include<stdio.h>

int LSearch(int arr[], int len, int target)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (arr[i] == target)
			return i;
	}
	return -1;
}

int main()
{
	int arr[] = { 3,5,2,4,9 }; //(0~4) 5개의 배열
	int idx;
	
	idx = LSearch(arr, sizeof(arr) / sizeof(int), 4);//배열에서 4의 숫자를 찾아라
	
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	printf("=============================================\n");

	idx = LSearch(arr, sizeof(arr) / sizeof(int), 7);//배열에서 7의 숫자를 찾아라

	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	return 0;
}