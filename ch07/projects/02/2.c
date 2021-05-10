
#include <stdio.h>

int main()
{
	int i, k;
	char select;

	printf("This program prints a table of squares. \n\n");
	printf("Enter the number of entries in a table: ");
	scanf_s("%d", &k);
	getchar();

	for (i = 1; i <= k; i++)
    {
		if (i % 24 != 0)
			printf("%10d%10d\n", i, i * i);
		else
		{
			printf("%10d%10d\n", i, i * i);
			printf("\nPress enter to continue:\n");
			select = getchar();

			if (select == '\n')
				continue;
			
			else
				break;
		}
    }
    
	getch();
	return 0;
}
