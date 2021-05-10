
#include <stdio.h>
#define N  5

int find_largest(int a[], int n);

int main(void)
{
	int arr[N] = { 7, 1, 6, 18, 9 };

	printf("Largest: %d", find_largest(arr, N));

	getch();
	return 0;
}

int find_largest(int a[], int n)
{
	int* p, max;
	max = *a;

	for (p = a + 1; p < a + n; p++)
		if (*p > max)
			max = *p;

	return max;
}
