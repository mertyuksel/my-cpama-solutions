
#include <stdio.h>
#define	N 10

void find_two_largest(const int* a, int n, int* largest, int* second_largest);

int main(void)
{
	int arr[N] = { 15, 10, 119, 20, 22, 122, 22, 14, 135, 1 };
	int big, s_big;

	find_two_largest(arr, N, &big, &s_big);
	printf("Largest: %d\nSecond_Largest: %d", big, s_big);

	getch();
	return 0;
}

void find_two_largest(const int* a, int n, int* largest, int* second_largest)
{
	int* p;
	*largest = *a;
	*second_largest = *a;

	for (p = a + 1; p < a + N; p++)
		if (*p > *largest)
			*largest = *p;

	for (p = a + 1; p < a + N; p++)
		if (*p > *second_largest)
			if (*largest != *p)
				*second_largest = *p;
}
