#include <stdio.h>

int main(void)
{
	char s[] = "Hsjodi", *p;

	for (p = s; *p; p++)
		--*p;
	puts(s);

	getch();
	return 0;
}

// OUTPUT: Grinch

// For the first iteration of the for loop:
// char 'H' = 48 decimal in ascii table.
// (*p) = 'H' = 48
// --(*p) after execution => 'G' = 47
// our new string becomes "Gsjodi" after first execution
