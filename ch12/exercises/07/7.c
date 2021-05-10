
#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);          

int main(void)
{
	int key, arr[5] = { 9, 16, 25, 34, 83 };
	key = 35;

	if (search(arr, 9, key))
		printf("true");
	else
		printf("false");

	getch();
	return 0;
}


bool search(const int a[], int n, int key)
{
	int* p;

	for (p = a; p < a + n; p++)
		if (key == *p)
			return true;

	return false;
}


