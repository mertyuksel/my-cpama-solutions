
//**** PROJECT 3******//

#include <stdbool.h> 
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = { false };
	int digit, i;
	long n;

	while (1)
	{
		printf("\nEnter a number: ");
		scanf_s("%ld", &n);

		if (n <= 0)
		{
			printf("\n");
			return 0;
		}

		while (n > 0)
		{
			digit = n % 10;
			if (digit_seen[digit])
				break;
			digit_seen[digit] = true;
			n /= 10;
		}

		if (n > 0)
			printf("Repeated digit\n");
		else
			printf("No repeated digit\n");

		for (i = 0; i < 9; i++)
			digit_seen[i] = false;
	}

	getch();
	return 0;
}