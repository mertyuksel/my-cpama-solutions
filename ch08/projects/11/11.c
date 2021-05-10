
#include <stdio.h>

int main()
{
	char ch[15];
	int i, j;

	printf("Enter phone number:  ");
	for (i = 0;; i++)               
	{                             
		scanf_s("%c", &ch[i]);
		if (ch[i] == '\n')       
			break;                
	}

	printf("In numeric form:     ");
	for (j = 0;; j++)
	{
		if (ch[j] == '\n')                       
			break;

		switch (toupper(ch[j]))
		{
		case 'A':  case 'B': case 'C':
			ch[j] = '2';
			printf("%c", ch[j]);
			break;

		case 'D':  case 'E': case 'F':
			ch[j] = '3';
			printf("%c", ch[j]);
			break;


		case 'G':  case 'H': case 'I':
			ch[j] = '4';
			printf("%c", ch[j]);
			break;


		case 'J':  case 'K': case 'L':
			ch[j] = '5';
			printf("%c", ch[j]);
			break;


		case 'M':  case 'N': case 'O':
			ch[j] = '6';
			printf("%c", ch[j]);
			break;


		case 'P':  case 'R': case 'S':
			ch[j] = '7';
			printf("%c", ch[j]);
			break;


		case 'T':  case 'U': case 'V':
			ch[j] = '8';
			printf("%c", ch[j]);
			break;


		case 'W':  case 'X': case 'Y':
			ch[j] = '9';
			printf("%c", ch[j]);
			break;

		default:
			putchar(ch[j]);

			break;
		}
	}

	printf("\n\n");
	getch();
	return 0;
}


