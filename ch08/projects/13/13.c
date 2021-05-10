

#include <stdio.h>
#include <ctype.h> 

int main(void)
{
	char ch, initial;
	char arr[20];
	int i;

	printf("Enter a first and last name: ");
	while ((ch = getchar()) == ' '); 
	initial = ch;
	while ((ch = getchar()) != ' '); 
	
	i = 0;
	while (1)
	{
		ch = getchar();
		if (ch != ' ') {
			arr[i] = ch;
			if (arr[i] == '\n')
				break;
			i++;
		}
	}

	for (i = 0;; i++)
	{
		if (arr[i] == '\n')
			break;
		printf("%c", arr[i]);

	}

	printf(", %c.", initial);

	getch();
	return 0;
}


