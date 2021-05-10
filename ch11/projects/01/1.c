
#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
	int input, d20, d10, d5, d1;

	printf("Enter a dollar amount: ");
	scanf_s("%d", &input);

	pay_amount(input, &d20, &d10, &d5, &d1);

	printf("\nTwenties: %d\nTens: %d\nFives: %d\nOnes: %d", d20, d10, d5, d1);

	getch();
	return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = dollars / 20;
	*tens = dollars % 20 / 10;
	*fives = dollars % 20 % 10 / 5;
	*ones = dollars % 20 % 10 % 5;
}
