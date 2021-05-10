

#include <stdio.h>

int main()
{
	int i, j;
	char arr[8][8];

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
				arr[i][j] = 'B';
			else
				arr[i][j] = 'R';
		}
	}
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", arr[i][j]);
		
		printf("\n");
	}
	
	getch();
	return 0;
}


