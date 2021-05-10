
#include <stdio.h>

int main()
{
	char word;
	float wordCount, wordLenght;

	wordLenght = 0;
	wordCount = 0;

	printf("Enter a sentece: ");
	while ((word = getchar()) == ' ');

	while (word != '\n')
	{
		if (word != ' ')
			wordLenght++;
		else                                               
		{
			while ((word = getchar()) == ' ');     
			wordCount++;
			continue;
		}
		word = getchar();		                
	}
	
	wordCount += 1;         
	printf("Average word length: %.1f", wordLenght / wordCount);

	getch();
	return 0; 
}