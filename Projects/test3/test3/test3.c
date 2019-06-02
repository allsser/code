#include <stdio.h>

int main()
{
	int i = 100;
	int *ptr = &i;
	int i2 = *ptr;

	*ptr = 200;

	printf("i = %d\n", i);
	printf("i2 = %d\n", i2);
	printf("*ptr = %d\n", *ptr);
	printf("&i = %p\n", &i);
	printf("ptr = %p\n", ptr);
	printf("i = %p\n", i);
	printf("i2 = %p\n", i2);

	return 0;
}