
#include <stdio.h>

int main(void)
{
	int i, j;
	char msg[50];

	printf("Enter a message: ");
	for (i = 0; msg[i-1] != '\n'; i++)
	{
		scanf_s("%c", &msg[i]);
	}

	printf("In B1FF-speak: ");
	for (j = 0; msg[j-1] != '\n'; j++)
	{
		switch (toupper(msg[j]))
		{
		case 'A': printf("%c", '4'); break;
		case 'B': printf("%c", '8'); break;
		case 'E': printf("%c", '3'); break;
		case 'I': printf("%c", '1'); break;
		case 'O': printf("%c", '0'); break;
		case 'S': printf("%c", '5'); break;
		default:
			printf("%c", toupper(msg[j])); 
            break;		
		}
	}

	getch();
	return 0;
}


