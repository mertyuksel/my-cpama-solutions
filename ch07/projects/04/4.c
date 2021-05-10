#include <stdio.h>

int main()
{
	char ch[5];
    
	printf("Enter phone number : ");
	for (int i = 0; i < 5 ; i++)
		scanf_s("%c", &ch[i]);

	printf("Your array: ");
	for (int j = 0; j < 5; j++)
		putchar(toupper(ch[j]));

	getch();
	return 0;
}

