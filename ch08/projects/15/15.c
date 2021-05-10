
#include <stdio.h>
#define BUFFER 50

int main(void)
{
	char input, msg[BUFFER] = { 0 };
	int i, shift_amt;

	printf("\nEnter message to be encrypted: ");
	for (i = 0; (input = getchar()) != '\n'; i++)
	{
		if (i < BUFFER)
			msg[i] = input;
	}

	
	printf("Enter shift amount (1-25): ");
	scanf_s("%d", &shift_amt);

	if (shift_amt < 1 || shift_amt > 25)
	{
		printf("Incorrect shift amount.\n\n");
	}

	for (i = 0; i < BUFFER; i++)
	{
		if (msg[i] == 0) break;

		if (msg[i] >= 'A' && msg[i] <= 'Z')
		{
			msg[i] = ((msg[i] - 'A') + shift_amt) % 26 + 'A';
		}
		if (msg[i] >= 'a' && msg[i] <= 'z')
		{
			msg[i] = ((msg[i] - 'a') + shift_amt) % 26 + 'a';
		}
	}

	printf("Ecrypted message: ");
	for (i = 0; i < BUFFER; i++)
	{
		if (msg[i] == 0) break;
		putchar(msg[i]);
	}
	printf("\n\n");

	getch();
	return 0;
}
