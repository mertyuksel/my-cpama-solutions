
#include <stdio.h>

int main()
{
	long arr[50] = { 0 }, number, number_1, digit;
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

	printf("Digits:\t\t");
	for (int i = 0; i < 10; i++)
		printf("%d ", i);

	printf("\nOccurrences:\t");
	for (int j = 0; j < 10; j++)
		printf("%d ", arr[j]);

	getch();
	return 0;
}
	
	
