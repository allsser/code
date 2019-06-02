#include<stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;       //탐색 대상의 시작 인덱스 값
	int last = len - 1;  //탐색 대상의 마지막 인덱스 값
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;   //탐색 대상의 중앙을 찾는다.

		if (target == ar[mid])     //중앙에 저장된 것이 타겟이라면
			return mid;            //탐색 완료!
		else                       //타겟이 아니라면 탐색 대상을 반으로 줄인다.
			if (target < ar[mid])
				last = mid - 1;    //왜 -1을 하였을까?
			else
				first = mid + 1;   //왜 +1을 하였을까?
								   //mid에 저장된 인덱스값의 배열요소도 새로운 탐색의 범위에 포함이 된다.
								   //그런데 이는 불필요한 일이다. mid의 배열요소에 탐색 대상이 저장되어 있는지 검사가 이미 끝난 상태이기 때문이다.
	}
	return -1;           //찾지 못했을 때 반환되는 값 -1
}

int main(void)
{
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	printf("==========================================\n");

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인텍스 : %d\n", idx);

	return 0;
}