#if 0
#include<stdio.h>
int main()
{
	FILE *fp = NULL;
	fp = fopen("sample0.txt", "w");
	if (fp == NULL)
		printf("파일열기 실패\n");
	else
		printf("파일열기 성공\n");
	fclose(fp);
	return 0;
}
#endif

#if 1
#include<stdio.h>
int main()
{
	if (remove("sample1.txt") == -1)
		printf("sample0.txt를 삭제할 수 없습니다\n");
	else
		printf("sample0.txt를 삭제 했습니다.\n");
	return 0;
}
#endif