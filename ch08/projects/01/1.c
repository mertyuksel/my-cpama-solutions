
#include <stdio.h>

int main()
{
	long arr[50] = {0}, number, number_1, digit;
	int digitCount = 0;
	
	printf("Enter a number: ");
	scanf_s("%ld", &number);

	while (number > 0)
	{
		digit = number % 10;
		digitCount++;
		arr[digit]++;
		number /= 10;
	}

	printf("Repeated digit(s): ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] >= 2)
			printf("%ld ", i);
	}
	
	getch();
	return 0;
}
