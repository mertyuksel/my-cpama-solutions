#include <stdio.h>

int power(int x, int n);

int main(void)
{
	int x, n;

	printf("\nEnter x and n for (x^n): ");
	scanf_s("%d%d", &x, &n);
	printf("Result: %d\n\n", power(x, n));

	getch();
	return 0;
}

int power(int x, int n)
{
	int result;

	if (n == 0)
		return 1;
	else if (n % 2 == 0)
		return x * x * power(x, n - 2);
	else
		return x * power(x, n - 1);
}