
#include <stdio.h>
#include <math.h>

int main()
{
	double x, y, average;

	printf("Enter a positive number: ");
	scanf_s("%lf", &x);

	y = 1;
	average = (y + (x / y)) / 2;

	while (fabs(y - average) > (y * 0.00001))   
	{
		y = average;
		average = (y + (x / y)) / 2;
	}
	
	printf("Square root : %.5lf", y);

	getch();
	return 0;
}