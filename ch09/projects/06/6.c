
#include <stdio.h>

double calculate(double x);
double power(double z, double n);

int main()
{
	double num;

	printf("Enter a value: ");
	scanf_s("%lf", &num);
	printf("Result: %.1lf ", calculate(num));

	getch();
	return 0;
}

double calculate(double x)
{
	double result;
	result = 3 * power(x, 5);
	result += 2 * power(x, 4);
	result -= 5 * power(x, 3);
	result -= power(x, 2);
	result += 7 * x - 6;

	return result;
}

double power(double z, double n)
{
	if (n < 1)
		return 1;
	else
		return z * power(z, n - 1);
}




