
#include <stdio.h>

int main()
{
	int arr[40];
	
    arr[0] = 0;
	arr[1] = 1;

	for (int i = 0; i <= 37; i++)
		arr[i + 2] = arr[i] + arr[i + 1];

	for (int i = 0; i < 40; i++)
		printf("%d ", arr[i]);

	printf("\n%d", sizeof(arr));                      
												 
	getch(); 
	return 0;
}


