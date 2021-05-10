
#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
	long total = 16784;
	int hour, minute, second;

	split_time(total, &hour, &minute, &second);
	printf("Hour: %d\nMinute: %d\nSecond: %d", hour, minute, second);

	getch();
	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*sec = total_sec % 60;
	*min = total_sec / 60 % 60;
	*hr = total_sec / 60 / 60;
}