
#include <stdio.h>

void swap(int* p, int* q);

int main(void)
{
	int i = 4, j = 1;

	swap(&i, &j);
	printf("i: %d \nj: %d", i, j);

	getch();
	return 0;
}

void swap(int* p, int* q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}