

#include <stdio.h>
#define MAX 50

int main(void)
{
	char *p, a[MAX];

	printf("Enter a message: ");
	for (p = a; (*p = getchar()) != '\n'; p++);

	printf("Reversal is: ");
	for (p--; p >= a; p--)
		putchar(*p);          
							 

	getch();
	return 0;
}
