
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int alphabet_scores[26] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
							  1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
	int score = 0;

	printf("\nEnter a word: ");

	while ((ch = toupper(getchar())) != '\n')
		if (ch >= 'A' && ch <= 'Z')
			score += alphabet_scores[ch - 'A'];

	printf("Scrabble value: %d\n\n", score);
	
	getch();
	return 0;
}




