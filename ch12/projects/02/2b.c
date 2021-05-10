
#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void)
{
	char a[N], word, *q, *p = a;  

	printf("Enter a message: ");

	while ((word = tolower(getchar())) != '\n')
	{
		if ((97 <= word && word <= 122))  
		{
			*p = word;
			p++;
		}
	}

	p = p -1;

	for (q = a; a <= p; p--, q++)
	{
		if (*p != *q)
		{
			printf("Not a Palindrome");
			getch();
			return 0;
		}
	}
	printf("Palindrome");

	getch();
	return 0;
}
