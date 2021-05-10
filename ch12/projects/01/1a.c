
#include <stdio.h>
#define MAX 50

int main(void)
{
	char arr[MAX], i;

	printf("Enter a message: ");
	for (i = 0; (arr[i] = getchar()) != '\n'; i++);  

	printf("Reversal is: ");
	for (i--; i >= 0; i--)
		putchar(arr[i]);
	putchar('\n');

	getch();
	return 0;
}


