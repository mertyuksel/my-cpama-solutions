
#include <stdio.h>
#define true 1
#define false 0

int main()
{
	typedef int bool;
	bool weekend[] = { true, false, false, false, false, false, true };
	int i;
	
	for (i = 0; i < 7; i++)
		printf("\nDay %d: Weekend %d", i + 1, weekend[i]);
	
    printf("\n\n");
	getch();
	return 0;
}
	