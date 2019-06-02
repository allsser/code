#define MAX 100
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int Count;
	int Data[MAX];
}listType;

void Insert(listType *Lptr, int Position, int Item);
void Delete(listType *Lptr, int Position);
void Retrieve(listType *Lptr, int Position, int *ItemPtr);

void Inint(listType *Lptr);
//bool IsEmpty(listType *Lptr);
int Length(listType *Lptr);