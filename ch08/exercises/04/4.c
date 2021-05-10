

#include <stdbool.h> 
#include <stdio.h>

int main(void)
{
	bool weekend[7] = { [0] = true,[6] = true };
	int i;

	for (i = 0; i < 7; i++)
		printf("\nDay %d: Weekend %d", i + 1, weekend[i]);
	printf("\n\n");

	getch();
	return 0;
}