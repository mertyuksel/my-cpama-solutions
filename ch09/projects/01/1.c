
#include <stdio.h>
#define N 10

int selection_sort(int arr[], int n)
{
	if (n > 0)
	{
		int largest, point = 0, temp;
		largest = arr[0];

		for (int i = 0; i < n; i++)
		{
			if (arr[i] > largest)
			{
				largest = arr[i];
				point = i;
			}
		}
		temp = arr[n - 1];
		arr[n - 1] = arr[point];
		arr[point] = temp;

		selection_sort(arr, n - 1);
	}
	else
		return 0;
}

int main()
{
	int number, mr[N];
	printf("Enter a series of integer: ");
	
	for (int i = 0; i < N; i++)
		scanf_s("%d", &mr[i]);
	
	selection_sort(mr, N);

	printf("Sorted: ");
	for (int i = 0; i < N; i++)
		printf("%d ", mr[i]);
	
	getch();
	return 0;
}


