#include <stdio.h>

void reverse(char s[], int size)
{
	if (size == 0)
		return;
	else
	{
		printf("%c", s[size - 1]);
		reverse(s, size - 1);
	}
}