

#include <stdio.h>
#define  N 5

int* find_middle(int a[], int n);

int main(void)
{
	int arr[N] = { 7, 1, 6, 8, 9 }, *p;

	p = find_middle(arr, N);
	printf("Result = %d", *p);

	getch();
	return 0;
}

int* find_middle(int a[], int n)
{
	return a + n / 2;
}