
#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void)
{
	char a[N], word;
	int i = 0, j, ctrl;

	printf("Enter a message: ");

	while (1)
	{
		scanf_s("%c", &word);

		if (word == '\n')
			break;

		if ((65 <= word && word <= 90) || (97 <= word && word <= 122))  
		{
			a[i] = tolower(word);
			i++;
		}
	}

	j = i - 1;
	ctrl = j;

	for ( i = 0; 0 <= j; j--, i++)
		if (a[i] != a[j])
		{
			printf("Not a Palindrome");

			getch();
			return 0;
		}

	printf("Palindrome");

	getch();
	return 0;
}
