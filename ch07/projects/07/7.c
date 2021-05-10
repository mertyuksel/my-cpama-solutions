#include <stdio.h>

int main() 
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char select;

	printf("Enter two fractions seperated by a plus sign: ");
	scanf_s("%d/%d%d/%d", &num1, &denom1, &num2, &denom2);

	switch (select)
	{
	case '+':
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		break;

	case '-':
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		break;

	case '*':
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		break;

	case '/':
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		break;
	}

	printf("The sum is %d/%d\n", result_num, result_denom);

	getch();
	return 0;
}