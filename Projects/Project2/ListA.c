#include <stdio.h>
#include "ListA.h"          
void Init(listType *Lptr)
{
		Lptr->Count = 0;
}
/*bool IsEmpty(listType *Lptr) {
		return (Lptr->Count == 0);
}*/
void Insert(listType *Lptr, int Position, int Item) {
	if (Lptr->Count == MAX)
			printf("List Full");
		else if ((Position > (Lptr->Count + 1)) || (Position < 1))
			printf("Position out of Range");
		else {
			for (int i = (Lptr->Count - 1); i >= (Position - 1); i--)
			{
				Lptr->Data[i + 1] = Lptr->Data[i];
				Lptr->Data[Position - 1] = Item;
				Lptr->Count += 1;
			}
		}
}
