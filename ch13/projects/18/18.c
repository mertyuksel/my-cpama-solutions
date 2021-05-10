
#include <stdio.h>

int main(void)
{
	int month, day, year;
	char *arr[] = { "January", "February", "March" ,"April", "May", "June", "July",
					 "August", "September", "October", "November", "December"};

	printf("Enter a date: ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("You entered the date %s %d, %d", arr[month -1 ], day, year);

	getch();
	return 0;
}
