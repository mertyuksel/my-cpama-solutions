
#include <stdio.h>

int main()
{
	char input[50], output[50];
	char mark;
	int count = 0, i, back = 0, count1, time=0, count2,count3;
	int digit = 0;
	printf("Enter a sentence: ");

	for (i = 0;; i++)
	{
		scanf_s("%c", &input[i]);
		count++;
	
		if (input[i] == '?')
		{
			mark = input[i];
			break;
		}
	}
	count--;
	count3 = count;

	for (;count >= 0; count--)
	{
		if (input[count] == ' ')
		{
			count2 = count;
			count1 = count + time;

			for (; count2 <= count1; back++, count2++)
			{
				if (input[count2] == '?')
					break;
				output[back] = input[count2];
				digit++;
			}
			time = 0;
			

		}
		else
			time++;
	}

	printf("Reversal of the sentence:");

	for ( i = 0; i < digit; i++)
	{
		printf("%c", output[i]);
	}

	printf(" ");
	for (i = 0;; i++)
	{
		if (input[i] == ' ')
			break;
		printf("%c", input[i]);
	}
	printf("%c", mark);

	getch();
	return 0;
}


