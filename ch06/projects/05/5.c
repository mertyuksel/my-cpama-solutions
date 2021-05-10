#include <stdio.h>

int main() {
	
	int number, a;

	printf("\nEnter Number: ");
	scanf_s("%d", &number);
	printf("\nReverse Number: ");

	do 
    {
		a = number % 10;
		number /= 10;
		printf("%d", a);
	} 
    while (number > 0);

    getch();
    return 0;
}
