#include <stdio.h>
#include <stdlib.h>
/*#define SIZE 10
int inc();

int main()
{
	inc();
	return 0;
}

int inc()
{
		int i, 자리, seats[SIZE] = { 0 };
		char x;

		while (1)
		{
			printf("좌석을 예약하시겠습니까? (y 또는 n) : ");
			scanf("  %c", &x);
			if (x == 'y')
			{
				printf("===================================================================\n");
				printf("	1	2	3	4	5	6	7	8	9	10\n");
				printf("===================================================================\n");

				for (i = 0; i < SIZE; i++)
					printf("	%d", seats[i]);
				printf("\n");

				printf("몇번째 자리를 예약하시겠습니까? ");
				scanf("%d", &자리);
				if (자리 <= 0 || 자리 > SIZE)
				{
					printf("1부터 10사이의 숫자를 입력하세요.\n");
					continue;
				}

				if (seats[자리 - 1] == 0)
				{
					seats[자리 - 1] = 1;
					printf("예약되엇습니다.\n");
				}
				else
					printf("예약되어있는자리입니다.\n");
			}
			else if (x == 'n')
				return 0;
		}
		return 0;
	}
int main()
{
	int i = 10;
	char c = 60;
	double f = 12.3;

	printf("i의 주소 : %p\n", &i);
	printf("c의 주소 : %p\n", &c);
	printf("f의 주소 : %p\n", &f);

	printf("i의 주소 : %u\n", &i);
	printf("c의 주소 : %u\n", &c);
	printf("f의 주소 : %u\n", &f);

	return 0;
}
int main()
{
	int i = 10;
	double f = 12.3;
	int *pi = NULL;
	double *pf = NULL;

	pi = &i;
	pf = &f;
	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);

	return 0;
}

int main()
{
	int i = 30;
	int *p = NULL;

	p = &i;

	printf("i = %d\n", i);
	printf("&i = %u\n\n", &i);

	printf("*p = %d\n", *p);
	printf("p = %u\n", p);

	return 0;
}
int main()
{
	int x = 10, y = 20;
	int *p;

	p = &x;
	printf("p = %d\n", p);
	printf("*p = %d\n\n", *p);

	p = &y;
	printf("p = %d\n", p);
	printf("*p = %d\n", *p);

	return 0;
}
int main()
{
	char *pc;
	int *pi;
	double *pd;

	pc = (char*)1000;
	pi = (int*)1000;
	pd = (double*)1000;

	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("증사 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	return 0;
}
int main()
{
	int a[] = { 10,20,30,40,50 };

	printf("%u %u %u", &a[0], &a[1], &a[2]);

}
int main()
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	char dss[] = "f";
	int i;
	printf("원본 문자열=%s\n", src);
	for (i = 0; i < src[i] != NULL; i++)
		dst[i] = src[i];
	dst[i] = NULL;
	printf("복사된 문자열=%s\n", dst);

	while (dss[i] != 0)
		i++;
	printf("문자열\"%s\"의 길이는 %d입니다\n", dss, i);
	return 0;
}
int main()
{
	int ch;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}
#include <conio.h>
int main()
{
	int ch;
	while ((ch = _getche()) != 'q')
		_putch(ch);
	return 0;

}
int main()
{
	char name[100];
	char address[100];

	printf("이름을 입력하시오: ");
	gets(name);

	printf("주소를 입력하시오: ");
	scanf("%s", address);

	puts(name);
	printf("%s", address);
	return 0;
}
int main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (islower(c))
			c = toupper(c);
		putchar(c);
	}
	return 0;
}
#include<ctype.h>
int counter_word(char*s);

int main()
{
	int wc = counter_word("the c book...");
	printf("단어의 개수: %d\n",wc);
	return 0;
}

int counter_word(char *s)
{
	int i, wc = 0, waiting = 1;

	for (i = 0; s[i] != NULL; i++ )
		if (isalpha(s[i]))
		{
			if (waiting)
			{
				wc++;
				waiting = 0;
			}
		}
		else waiting = 1;
	return wc;
}
#include<stdlib.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main()
{
	struct student s;

	/*s.number = 2015305502;
	strcpy(s.name, "최찬종");
	s.grade = 4.5;

	printf("학번을 입력하시오 : ");
	scanf("%d", &s.number);

	printf("이름을 입력하시오 : ");
	scanf("%s", s.name);

	printf("학점을 입력하시오 : ");
	scanf("%lf", &s.grade);


	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %lf\n", s.grade);

	return 0;
}

#include<math.h>

struct point {
	int x;
	int y;
};

int main()
{
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;

	printf("점의 좌표를 입력하시오(x, y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("점의 좌표를 입력하시오(x, y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt(xdiff*xdiff + ydiff*ydiff);
	printf("거리는 %f입니다.\n", dist);

	return 0;
}

#define SIZE 3
struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student list[SIZE];
	

	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("학점을 입력하시오: ");
		scanf("%lf", &list[i].grade);
		printf("-------------------------\n");
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("학번: %d\n",list[i].number);
		printf("이름: %s\n", list[i].name);
		printf("학점: %lf\n\n", list[i].grade);
	}
	return 0;
}
struct vector {
	double x;
	double y;
};

struct vector get_vector_sum(struct vector a, struct vector b);

int main()
{
	struct vector a = { 2.0,3.0 };
	struct vector b = { 5.0,6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);
	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
	
}
union example {
	int i;
	char c;
};

int main()
{
	union example v;
	v.c = 'A';
	printf("v.c:%c  v.i:%d\n", v.c, v.i);

	v.i = 10000;
	printf("v.c:%c  v.i:%d\n", v.c, v.i);
	return 0;
}
struct student {
	int number;
	char name[20];
	double grade;
};

struct student list[] = { {201201,"홍길동",4.20},
						   {201202,"김철수",3.2},
						   {201203,"김영희",3.9} };

int main()
{
	struct student super_stu;
	int i, size;

	size = sizeof(list) / sizeof(list[0]);

	super_stu = list[0];
	for (i = 0; i < size; i++)
		if (list[i].grade > super_stu.grade)
			super_stu = list[i];
	printf("평점이 가장 높은 학생은 (이름%s, 학번%d, 평점%f)입니다.\n",
		super_stu.name, super_stu.number, super_stu.grade);
}
void set_pointer(char **q);
char *proverb = "All that glister is not gold.";

int main()
{
	char *p = "zzz"; 
	set_pointer(&p);
	printf("%s \n", p);
	return 0;
}

void set_pointer(char **q)
{
	*q = proverb;
}
void menu();
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu()
{
	printf("=======================\n");
	printf("0. 덧셈\n");
	printf("1. 뺄셈\n");
	printf("2. 곱셈\n");
	printf("3. 나눗셈\n");
	printf("4. 종료\n");
	printf("=======================\n");
}

int main()
{
	int choice, result, x, y;
	int(*pf[4])(int, int) = { add,sub,mul,div };

	while (1)
	{
		menu();

		printf("메뉴를 선택하시오: ");
		scanf("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;

		printf("2개의 정수를 입력하시오:");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y);

		printf("연산 결과 = %d\n", result);
	}
	return 0;
}

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x*y;
}
int div(int x, int y)
{
	return x / y;
}*/
/*
#define DEBUG ==1
int main()
{
#if 1
	printf("dd");
#endif
	printf("SDSD");
#if DEBUG == 1
	printf("WEQWEQWEQW");
#endif
}*/
#if 0
int main()
{
	FILE *fp = NULL;
	fp = fopen("sample.txt", "w");
	if (fp == NULL)
		printf("파일열기 실패\n");
	else
		printf("파일열기 성공\n");
	fclose(fp);
	return 0;
}

int main()
{
	if (remove("sample.txt") == -1)
		printf("sample.txt를 삭제할 수 없습니다.\n");
	else
		printf("sample.txt.를 삭제하였습니다\n");
	return 0;
}
#endif
#if 0
#include <stdlib.h>
int main()
{
	char *pc = NULL;
	int i = 0;

	pc = (char *)malloc(100 * sizeof(char));
	if (pc == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}
	for (i = 0; i < 26; i++)
	{
		pc[i] = 'a' + i;
	}
	pc[i] = 0;
	printf("%s\n", pc);
	free(pc);

	return 0;
}
#endif
#if 0
int main()
{
	int *score;
	int i, x,sum;
	int arr[10];
	score = (int*)malloc(100 * sizeof(int));
	if (score == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	printf("정수의 개수(10 이하):");
	scanf("%d", &x);
	sum = 0;
	for (i = 0; i < x; i++)
	{
		printf("양의 정수를 입력하시오:");
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("합은 %d입니다.\n", sum);
	free(score);
	return 0;
}
#endif
#if 0
int main()
{
	char **string = NULL;
	int x, i;
	printf("문자열의 개수:");
	scanf("%d", &x);
	if ((string = (char**)malloc(100 * sizeof(char*))) != NULL)
	{
		for (i = 0; i < x; i++)
			string[i] = (char*)malloc(100 * sizeof(char));
	}
	printf("%d개의 문자열을 저장할 수 있는 공간이 할당되었습니다.\n", x);

	for (i = 0; i < x; i++)
	{
		printf("%d번째 문자열:", i + 1);
		fflush(stdin);
		gets(string[i]);
	}
	for (i = 0; i < x; i++)
	{
		printf("입력받은 문자열:");
		puts(string[i]);
	}
	free(string);
	return 0;
}
#endif
#if 0

typedef struct movies
{
	char title[100];
	double rating;
}MOVIE;

int main()
{
	MOVIE *movies;
	int size, i;
	printf("몇 편이나 저장하시겠습니까? ");
	scanf("%d", &size);

	movies = (MOVIE*)malloc(sizeof(MOVIE)* size);
	if (movies == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	for (i = 0; i < size; i++)
	{
		printf("영화 제목:");
		scanf("%s", (movies[i].title));
		printf("영화 평점:");
		scanf("%lf", &(movies[i].rating));
		printf("-------------------------------------\n");
	}
	printf("====================================\n");
	printf("제목 \t 평점\n");
	printf("====================================\n");
	for (i = 0; i < size; i++)
		printf("%s \t %f \n", movies[i].title, movies[i].rating);
	printf("====================================\n");
	free(movies);
	return 0;
}
#endif
#if 0
typedef struct address
{
	char name[100];
	char number[100];
}ADDRESS;

int main()
{
	ADDRESS *address;
	int size, i;
	printf("주소의 개수:");
	scanf("%d", &size);
	printf("\n");

	address = (ADDRESS*)malloc(sizeof(ADDRESS)* size);
	if (address == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	for (i = 0; i < size; i++)
	{
		printf("이름을 입력하시오:");
		scanf("%s", (address[i].name));
		printf("휴대폰 번호를 입력하시오:");
		scanf("%s", (address[i].number));
		printf("\n");
	}
	printf("\=====================================\n");
	printf("이름 \t\t 휴대폰 번호\n");
	printf("======================================\n");
	for (i = 0; i < size; i++)
	{
		printf("%s \t\t %s \n", address[i].name, address[i].number);
		printf("======================================\n");
	}
	free(address);
	return 0;
}
#endif
#if 0
#include<malloc.h>
typedef int DATA;
typedef struct NODE
{
	DATA data;
	struct NODE *link;
}NODE;

void print_list(NODE *plist);
int get_integer();
int main()
{
	NODE *plist;
	NODE *curr = NULL, *prev = NULL;
	int i;
	plist = NULL;
	while (1)
	{
		i = get_integer();
		if (i < 0)
			break;
		curr = (NODE*)malloc(sizeof(NODE));
		curr->data = i;
		curr->link = NULL;
		if (prev == NULL)
			plist = curr;
		else
			prev->link = curr;
		prev = curr;
	}
	print_list(plist);
	return 0;
}

void print_list(NODE *plist)
{
	NODE *p;
	p = plist;
	while (p)
	{
		printf("%d->", p->data);
		p = p->link;
	}
	printf("NULL\n");
}
int get_integer()
{
	int num;
	printf("양의 정수를 입력하세요(종료 -1):");
	scanf("%d", &num);
	return num;
}

#endif
#if 0
#include <stdio.h>
#define SIZE 100
int main()
{
	char buffer[SIZE];

	FILE *fp = NULL;
	FILE *fp1 = NULL;
	char file1[SIZE] = "file1.lib";
	char file2[SIZE] = "file2.lib";
	int i;
	int count;

	if ((fp = fopen(file1, "wb")) == NULL)
	{
		fprintf(stderr, "%s 파일을 열 수 없습니다.\n", file1);
		return 1;
	}
	i = 0;
	while (i < 0)
	{
		printf("%d번 입력: ", i + 1);
		gets(buffer);
		fwrite(buffer, sizeof(char), SIZE, fp);
		i++;
	}

	fclose(fp);
	if ((fp = fopen(file1, "rb")) == NULL)
	{
		fprintf(stderr, "%s 파일을 열 수 없습니다.\n", file1);
		return 1;
	}

	if ((fp1 = fopen(file2, "wb")) == NULL)
	{
		fprintf(stderr, "%s 파일을 열 수 없습니다.\n", file2);
		return 1;
	}
	i = 0;
	printf("\n복사파일 내용\n");
	while ((count = fread(buffer, sizeof(char), SIZE, fp)) != 0)
	{
		printf("%d번 내용: %s\n", i + 1, buffer);
		fwrite(buffer, sizeof(char), count, fp1);
		i++;
	}
	fclose(fp);
	fclose(fp1);
	return 0;
}
#endif
#if 0
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#pragma warning(disable : 4996)   
int main(char argc, char *argv[]) {
	FILE *fp1, *fp2;
	int flag = 1;
	//char file1[100];  
	//char file2[100];  
	if (argc < 3) {
		printf("Usage: FCopy src_file dest_file\n");
		return -1;
	}
	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL) {
		printf("%s 파일 열기 실패\n", argv[1]);
		return -1;
	}
	fp2 = fopen(argv[2], "r");
	if (fp2 == NULL) {
		printf("%s 파일 열기 실패\n", argv[2]);
		return -1;
	}
	while (1) {
		int c1 = fgetc(fp1);
		int c2 = fgetc(fp2);
		if (c1 != c2) {

			flag = 0;
			break;
		}
		if (c1 == EOF || c2 == EOF)
			break;
	}
	if (flag)
		printf("두 파일은 서로 같습니다.\n");
	else
		printf("두 파일을 서로 다릅니다.\n");

	fclose(fp1);
	fclose(fp2);
	return 0;
}
#endif
#if 0
int main()
{
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	int value;
	if ((fp1 = fopen("sample1.txt", "w")) == NULL)
	{
		fprintf(stderr, "파일을 열 수 없습니다.\n");
		return 0;
	}
	if ((fp2 = fopen("sample2.txt", "wb")) == NULL)
	{
		fprintf(stderr, "파일을 열 수 없습니다.\n");
		return 0;
	}
	for (int i = 1; i <= 100; i++)
	{
		value = rand();
		// 텍스트 파일에 저장할때 쓰는 함수
		fprintf(fp1, "%d ", value);
		// 이진 파일에 저장할때 쓰는 함수
		fwrite(&value, sizeof(int), 1, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	// 이진파일텍스트 파일을 콘솔창에 읽어보는 코딩
	if ((fp2 = fopen("sample2.txt", "rb")) == NULL)
	{
		fprintf(stderr, "파일을 열 수 없습니다.\n");
		return 0;
	}
	for (int i = 1; i <= 100; i++)
	{
		fread(&value, sizeof(int), 1, fp2);
		printf("%d ", value);
	}
	fclose(fp2);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main(void)
{
	FILE *fp = NULL;

	fp = fopen("sample.txt", "w");

		if (fp == NULL)
			printf("파일 열기 실패\n");
		else
			printf("파일 열기 성공\n");

	fclose(fp);
	return 0;
}
#endif
#if 0
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#pragma warning(disable : 4996)   
int main(char argc, char *argv[]) {
	FILE *fp1, *fp2;
	int flag = 1;
	//char file1[100];  
	//char file2[100];  
	if (argc < 3) {
		printf("Usage: FCopy src_file dest_file\n");
		return -1;
	}
	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL) {
		printf("%s 파일 열기 실패\n", argv[1]);
		return -1;
	}
	fp2 = fopen(argv[2], "r");
	if (fp2 == NULL) {
		printf("%s 파일 열기 실패\n", argv[2]);
		return -1;
	}
	while (1) {
		int c1 = fgetc(fp1);
		int c2 = fgetc(fp2);
		if (c1 != c2) {

			flag = 0;
			break;
		}
		if (c1 == EOF || c2 == EOF)
			break;
	}
	if (flag)
		printf("두 파일은 서로 같습니다.\n");
	else
		printf("두 파일을 서로 다릅니다.\n");

	fclose(fp1);
	fclose(fp2);
	return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
	int i = 100;
	int *p = &i;

	printf("i = %d \n", i);
	printf("&i = %p \n", &i);

	*p= 200;
	printf("i = %d \n", i);
	printf("&i = %p \n", &i);

	printf("\n");
	printf("*p = %d \n", *p);
	printf("p = %d \n", p);
	printf("p의 주소값 : %d\n", &*p);

	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("args[%d]: %s\n", i, args[i]);
	exit(0);
}
#endif

#if 0
#include <stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	char cmd[100];

	if (argc != 2)
	{
		printf("Auto Digger Version 0.9\n");
		printf("Usage : %s host\n", argv[0]);
		exit(0);
	}

	strcpy(cmd, "dig @");
	strcat(cmd, argv[1]);
	strcat(cmd, " version.bind chaos txt");

	system(cmd);
}
#endif

#if 0
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 12
void mazeGenerator(char[][SIZE]);

int main(void)
{
	char maze[SIZE][SIZE];
	srand((unsigned int)time(NULL));
	mazeGenerator(maze);
	return 0;
}
void mazeGenerator(char a[SIZE][SIZE])
{
	size_t row, column = 0, r;

	// initialize '#' to all positions of left-hand wall
	for (row = 0; row < SIZE; ++row)
	{
		a[row][column] = '#';
	}
	// initialize '#' to all positions of left-hand wall
	for (row = 0; row < SIZE; ++row)
	{
		a[row][SIZE - 1] = '#';
	}

	// initialize '.' to left-hand wall random positions from 1 -> 10
	row = rand() % 11 + 1;
	a[row][0] = '.';

	// initialize '.' to right-hand wall random positions from 1 -> 10
	row = rand() % 11 + 1;
	a[row][SIZE - 1] = '.';

	// intialize '#' to all positions of top maze
	for (column = 1; column < SIZE - 1; ++column)
	{
		a[0][column] = '#';
	}

	// intialize '#' to all positions of bottom maze
	for (column = 1; column < SIZE - 1; ++column)
	{
		a[SIZE - 1][column] = '#';
	}

	// print maze
	puts("");
	puts("** Maze Generator by Huy Le **\n");
	for (row = 0; row < SIZE; ++row)
	{
		for (column = 0; column < SIZE; ++column)
		{
			printf_s("%2c", a[row][column]);
		}
		puts("");
	}
	puts("");
}
#endif

#if 1
#include <stdio.h>

int n, min; // 맵의 크기와 최소값을 나타내는 변수
int map[10][10]; // 맵을 나타내는 2차원 배열

void DFS(int x, int y, int l)
{
	// 도착 지점에 도착했을 경우
	if (x == n - 1 && y == n - 1)
	{
		// 현재 최소값이 l보다 크면, l이 작은 것이므로 l를 최소값으로 지정
		if (min > l) min = l;
		return;
	}
	map[y][x] = 0; // 방문했음을 표시하기 위해 0을 대입

				   // 위로 이동할 수 있다면 이동!
	if (y > 0 && map[y - 1][x] != 0) DFS(x, y - 1, l + 1);
	// 아래로 이동할 수 있다면 이동!
	if (y < n - 1 && map[y + 1][x] != 0) DFS(x, y + 1, l + 1);
	// 왼쪽으로 이동할 수 있다면 이동!
	if (x > 0 && map[y][x - 1] != 0) DFS(x - 1, y, l + 1);
	// 오른쪽으로 이동할 수 있다면 이동!
	if (x < n - 1 && map[y][x + 1] != 0) DFS(x + 1, y, l + 1);

	map[y][x] = 1; // 지나간 자리를 원상태로 되돌리기 위해 1을 대입
}

int main()
{
	int i, j;

	scanf("%d", &n);
	min = n * n; // 모든 경로를 돌아다녀도 n * n이니, 이를 최소값으로 지정해둔다
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &map[i][j]);
	DFS(0, 0, 1); // DFS 시작!

	printf("최단 거리: %d\n", min);

	return 0;
}
#endif