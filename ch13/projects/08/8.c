#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char* word);

int main(void)
{
	char arr[10];
	int score;

	printf("Enter words: ");
	scanf("%s", arr);

	score = compute_scrabble_value(arr);
	printf("Scrabble value: %d\n\n", score);

	getch();
	return 0;
}

int compute_scrabble_value(const char* word)
{
	int arr[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1,
				 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
	int total = 0;

	for (; *word != '\0'; word++)
		total += arr[toupper(*word) - 'A'];

	return total;
}
