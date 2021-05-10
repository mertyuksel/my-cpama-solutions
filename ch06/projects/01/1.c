#include <stdio.h>

int main() {
	
	float number, largestNum = 0;

	for (;;) 
	{
		printf("Enter a number:  ");
		scanf_s("%f", &number);

		if (number <= 0) break;
		if (number > largestNum)
			largestNum = number; 
	}

	printf("The largest number is : %.2f ", largestNum);

	getch();
	return 0;
}
