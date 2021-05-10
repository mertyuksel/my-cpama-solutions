
#include <stdio.h>
#include <ctype.h>

int main()
{
	char input;
	int i, j, ch[26] = { 0 };

	printf("Enter first word: ");
	for (i = 0; (input = getchar()) != '\n'; i++)                  
	{                                                               
		input = tolower(input);
		if (input >= 'a' && input <= 'z')
		{
			input %= 97;
			ch[input]++;
		}
	}

	printf("Enter second word: ");
	for (i = 0; (input = getchar()) != '\n'; i++)        
	{
		input = tolower(input);
		if (input >= 'a' && input <= 'z')
		{
			input %= 97;
			ch[input]--;
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (ch[i] != 0)
		{
			printf("The words are not anagrams.");
			getch();
			return 0;
		}
	}

	printf("The words are anagrams.");

	getch();
	return 0;
}

