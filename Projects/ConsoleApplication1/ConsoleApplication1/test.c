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
		int i, �ڸ�, seats[SIZE] = { 0 };
		char x;

		while (1)
		{
			printf("�¼��� �����Ͻðڽ��ϱ�? (y �Ǵ� n) : ");
			scanf("  %c", &x);
			if (x == 'y')
			{
				printf("===================================================================\n");
				printf("	1	2	3	4	5	6	7	8	9	10\n");
				printf("===================================================================\n");

				for (i = 0; i < SIZE; i++)
					printf("	%d", seats[i]);
				printf("\n");

				printf("���° �ڸ��� �����Ͻðڽ��ϱ�? ");
				scanf("%d", &�ڸ�);
				if (�ڸ� <= 0 || �ڸ� > SIZE)
				{
					printf("1���� 10������ ���ڸ� �Է��ϼ���.\n");
					continue;
				}

				if (seats[�ڸ� - 1] == 0)
				{
					seats[�ڸ� - 1] = 1;
					printf("����Ǿ����ϴ�.\n");
				}
				else
					printf("����Ǿ��ִ��ڸ��Դϴ�.\n");
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

	printf("i�� �ּ� : %p\n", &i);
	printf("c�� �ּ� : %p\n", &c);
	printf("f�� �ּ� : %p\n", &f);

	printf("i�� �ּ� : %u\n", &i);
	printf("c�� �ּ� : %u\n", &c);
	printf("f�� �ּ� : %u\n", &f);

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

	printf("���� �� pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("���� �� pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
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
	printf("���� ���ڿ�=%s\n", src);
	for (i = 0; i < src[i] != NULL; i++)
		dst[i] = src[i];
	dst[i] = NULL;
	printf("����� ���ڿ�=%s\n", dst);

	while (dss[i] != 0)
		i++;
	printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�\n", dss, i);
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

	printf("�̸��� �Է��Ͻÿ�: ");
	gets(name);

	printf("�ּҸ� �Է��Ͻÿ�: ");
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
	printf("�ܾ��� ����: %d\n",wc);
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
	strcpy(s.name, "������");
	s.grade = 4.5;

	printf("�й��� �Է��Ͻÿ� : ");
	scanf("%d", &s.number);

	printf("�̸��� �Է��Ͻÿ� : ");
	scanf("%s", s.name);

	printf("������ �Է��Ͻÿ� : ");
	scanf("%lf", &s.grade);


	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %lf\n", s.grade);

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

	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt(xdiff*xdiff + ydiff*ydiff);
	printf("�Ÿ��� %f�Դϴ�.\n", dist);

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
		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", list[i].name);
		printf("������ �Է��Ͻÿ�: ");
		scanf("%lf", &list[i].grade);
		printf("-------------------------\n");
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("�й�: %d\n",list[i].number);
		printf("�̸�: %s\n", list[i].name);
		printf("����: %lf\n\n", list[i].grade);
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
	printf("������ ���� (%f, %f)�Դϴ�.\n", sum.x, sum.y);
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

struct student list[] = { {201201,"ȫ�浿",4.20},
						   {201202,"��ö��",3.2},
						   {201203,"�迵��",3.9} };

int main()
{
	struct student super_stu;
	int i, size;

	size = sizeof(list) / sizeof(list[0]);

	super_stu = list[0];
	for (i = 0; i < size; i++)
		if (list[i].grade > super_stu.grade)
			super_stu = list[i];
	printf("������ ���� ���� �л��� (�̸�%s, �й�%d, ����%f)�Դϴ�.\n",
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
	printf("0. ����\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ������\n");
	printf("4. ����\n");
	printf("=======================\n");
}

int main()
{
	int choice, result, x, y;
	int(*pf[4])(int, int) = { add,sub,mul,div };

	while (1)
	{
		menu();

		printf("�޴��� �����Ͻÿ�: ");
		scanf("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;

		printf("2���� ������ �Է��Ͻÿ�:");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y);

		printf("���� ��� = %d\n", result);
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
		printf("���Ͽ��� ����\n");
	else
		printf("���Ͽ��� ����\n");
	fclose(fp);
	return 0;
}

int main()
{
	if (remove("sample.txt") == -1)
		printf("sample.txt�� ������ �� �����ϴ�.\n");
	else
		printf("sample.txt.�� �����Ͽ����ϴ�\n");
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
		printf("�޸� �Ҵ� ����\n");
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
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	printf("������ ����(10 ����):");
	scanf("%d", &x);
	sum = 0;
	for (i = 0; i < x; i++)
	{
		printf("���� ������ �Է��Ͻÿ�:");
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("���� %d�Դϴ�.\n", sum);
	free(score);
	return 0;
}
#endif
#if 0
int main()
{
	char **string = NULL;
	int x, i;
	printf("���ڿ��� ����:");
	scanf("%d", &x);
	if ((string = (char**)malloc(100 * sizeof(char*))) != NULL)
	{
		for (i = 0; i < x; i++)
			string[i] = (char*)malloc(100 * sizeof(char));
	}
	printf("%d���� ���ڿ��� ������ �� �ִ� ������ �Ҵ�Ǿ����ϴ�.\n", x);

	for (i = 0; i < x; i++)
	{
		printf("%d��° ���ڿ�:", i + 1);
		fflush(stdin);
		gets(string[i]);
	}
	for (i = 0; i < x; i++)
	{
		printf("�Է¹��� ���ڿ�:");
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
	printf("�� ���̳� �����Ͻðڽ��ϱ�? ");
	scanf("%d", &size);

	movies = (MOVIE*)malloc(sizeof(MOVIE)* size);
	if (movies == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	for (i = 0; i < size; i++)
	{
		printf("��ȭ ����:");
		scanf("%s", (movies[i].title));
		printf("��ȭ ����:");
		scanf("%lf", &(movies[i].rating));
		printf("-------------------------------------\n");
	}
	printf("====================================\n");
	printf("���� \t ����\n");
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
	printf("�ּ��� ����:");
	scanf("%d", &size);
	printf("\n");

	address = (ADDRESS*)malloc(sizeof(ADDRESS)* size);
	if (address == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	for (i = 0; i < size; i++)
	{
		printf("�̸��� �Է��Ͻÿ�:");
		scanf("%s", (address[i].name));
		printf("�޴��� ��ȣ�� �Է��Ͻÿ�:");
		scanf("%s", (address[i].number));
		printf("\n");
	}
	printf("\=====================================\n");
	printf("�̸� \t\t �޴��� ��ȣ\n");
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
	printf("���� ������ �Է��ϼ���(���� -1):");
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
		fprintf(stderr, "%s ������ �� �� �����ϴ�.\n", file1);
		return 1;
	}
	i = 0;
	while (i < 0)
	{
		printf("%d�� �Է�: ", i + 1);
		gets(buffer);
		fwrite(buffer, sizeof(char), SIZE, fp);
		i++;
	}

	fclose(fp);
	if ((fp = fopen(file1, "rb")) == NULL)
	{
		fprintf(stderr, "%s ������ �� �� �����ϴ�.\n", file1);
		return 1;
	}

	if ((fp1 = fopen(file2, "wb")) == NULL)
	{
		fprintf(stderr, "%s ������ �� �� �����ϴ�.\n", file2);
		return 1;
	}
	i = 0;
	printf("\n�������� ����\n");
	while ((count = fread(buffer, sizeof(char), SIZE, fp)) != 0)
	{
		printf("%d�� ����: %s\n", i + 1, buffer);
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
		printf("%s ���� ���� ����\n", argv[1]);
		return -1;
	}
	fp2 = fopen(argv[2], "r");
	if (fp2 == NULL) {
		printf("%s ���� ���� ����\n", argv[2]);
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
		printf("�� ������ ���� �����ϴ�.\n");
	else
		printf("�� ������ ���� �ٸ��ϴ�.\n");

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
		fprintf(stderr, "������ �� �� �����ϴ�.\n");
		return 0;
	}
	if ((fp2 = fopen("sample2.txt", "wb")) == NULL)
	{
		fprintf(stderr, "������ �� �� �����ϴ�.\n");
		return 0;
	}
	for (int i = 1; i <= 100; i++)
	{
		value = rand();
		// �ؽ�Ʈ ���Ͽ� �����Ҷ� ���� �Լ�
		fprintf(fp1, "%d ", value);
		// ���� ���Ͽ� �����Ҷ� ���� �Լ�
		fwrite(&value, sizeof(int), 1, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	// ���������ؽ�Ʈ ������ �ܼ�â�� �о�� �ڵ�
	if ((fp2 = fopen("sample2.txt", "rb")) == NULL)
	{
		fprintf(stderr, "������ �� �� �����ϴ�.\n");
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
			printf("���� ���� ����\n");
		else
			printf("���� ���� ����\n");

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
		printf("%s ���� ���� ����\n", argv[1]);
		return -1;
	}
	fp2 = fopen(argv[2], "r");
	if (fp2 == NULL) {
		printf("%s ���� ���� ����\n", argv[2]);
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
		printf("�� ������ ���� �����ϴ�.\n");
	else
		printf("�� ������ ���� �ٸ��ϴ�.\n");

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
	printf("p�� �ּҰ� : %d\n", &*p);

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

int n, min; // ���� ũ��� �ּҰ��� ��Ÿ���� ����
int map[10][10]; // ���� ��Ÿ���� 2���� �迭

void DFS(int x, int y, int l)
{
	// ���� ������ �������� ���
	if (x == n - 1 && y == n - 1)
	{
		// ���� �ּҰ��� l���� ũ��, l�� ���� ���̹Ƿ� l�� �ּҰ����� ����
		if (min > l) min = l;
		return;
	}
	map[y][x] = 0; // �湮������ ǥ���ϱ� ���� 0�� ����

				   // ���� �̵��� �� �ִٸ� �̵�!
	if (y > 0 && map[y - 1][x] != 0) DFS(x, y - 1, l + 1);
	// �Ʒ��� �̵��� �� �ִٸ� �̵�!
	if (y < n - 1 && map[y + 1][x] != 0) DFS(x, y + 1, l + 1);
	// �������� �̵��� �� �ִٸ� �̵�!
	if (x > 0 && map[y][x - 1] != 0) DFS(x - 1, y, l + 1);
	// ���������� �̵��� �� �ִٸ� �̵�!
	if (x < n - 1 && map[y][x + 1] != 0) DFS(x + 1, y, l + 1);

	map[y][x] = 1; // ������ �ڸ��� �����·� �ǵ����� ���� 1�� ����
}

int main()
{
	int i, j;

	scanf("%d", &n);
	min = n * n; // ��� ��θ� ���ƴٳ൵ n * n�̴�, �̸� �ּҰ����� �����صд�
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &map[i][j]);
	DFS(0, 0, 1); // DFS ����!

	printf("�ִ� �Ÿ�: %d\n", min);

	return 0;
}
#endif