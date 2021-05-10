#include <stdio.h>

int main() {
	
	int i, n;

	printf("Enter a n value: ");
	scanf_s("%d", &n);

	for (i = 1; i * i <= n; i++) 
		if (i % 2 == 0) 
            printf("%d\n", i * i);
		
	getch();
	return 0;
}


