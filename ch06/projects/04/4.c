
#include <stdio.h>

int main() {

	float value, commission;

	for (;;) 
	{
		printf("Enter the value of trade: ");
		scanf_s("%f", &value);

		if (value == 0)
			break;
            
		if (value < 2500)
			commission = 30 + value * 17 / 1000;
		else if (value < 6250)
			commission = 56 + value * 66 / 10000;
		else if (value < 20000)
			commission = 76 + value * 34 / 10000;
		else if (value < 50000)
			commission = 100 + value * 22 / 10000;
		else if (value < 500000)
			commission = 155 + value * 11 / 10000;
		else
			commission = 255 + value * 9 / 10000;

		if (commission < 39)
			commission = 39;

		printf("Commission: $%.2f \n\n", commission);
	}

	getch();
	return 0;
}