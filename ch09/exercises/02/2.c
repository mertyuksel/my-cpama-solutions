

#include <stdio.h>

int check(int x, int y, int n)
{
	if ((0 <= x && x <= n - 1) && (0 <= y && y <= n - 1))
	{
		return 1;
	}
	return 0;
}


int main(void)
{
	int x, y, n;

	printf("\nEnter x, y, and n: ");
	scanf_s("%d%d%d", &x, &y, &n);

	if (check(x, y, n))
		printf("%d and %d are between 0 and %d\n\n", x, y, n);
	else
		printf("%d and %d are not between 0 and %d\n\n", x, y, n);
	getch();
	return 0;
}


