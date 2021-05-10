

#include <stdio.h> 

int main() {
	float value, value2;
	char operator;

	printf("Enter an expression: ");
	scanf_s("%f", &value);

	while ((operator = getchar()) != '\n')
	{
		if (operator == ' ') continue;
        scanf_s("%f", &value2);

		switch (operator)
		{
		case '+':
			value += value2;
		    break;
		case '-':
			value -= value2;
			break;
		case '*':
			value *= value2;
			break;
		case '/':
			value /= value2;
			break;
		}
	}

	printf("Value of expression(without arithmetic order): %g", value);
	
	getch();
	return 0;
}*/