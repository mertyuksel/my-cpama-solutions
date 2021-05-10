
#include <stdio.h>
#define N 5

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
	int big, second_big, arr[N] = { 14, 20, 7, 29, 2 };

	find_two_largest(arr, N, &big, &second_big);
	printf("Largest:\t%d\nSecond Largest:\t%d", big, second_big);

	getch();
	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	*largest = a[0];

	for (int i = 1; i < n; i++)
		if (a[i] > *largest)
			*largest = a[i];

	*second_largest = a[0];

	for (int i = 1; i < n; i++)
		if (a[i] > *second_largest)
			if (a[i] != *largest)
				*second_largest = a[i];
}
