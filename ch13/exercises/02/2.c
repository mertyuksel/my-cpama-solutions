
#include <stdio.h>

int main(void)
{
	char *p = "abc";

	//putchar(p);      // Illegal p is not character
	//putchar(*p);     // Legal output is a

	//puts(p);         // Legal; output is abc.
	//puts(*p);        // Illegal; *p is not a pointer, it is char type.

	// PUTCHAR expects char as an argument
	// PUTS expects pointer as an argument

	getch();
	return 0;
}
