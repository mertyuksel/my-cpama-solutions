

int main() {
	int a, b, c, d;

	printf("This program prints a table of squares \n");
	printf("Enter number of entries in table: ");
	scanf_s("%d", &a);

	b = 3;
	d = 1;

	for (c = 1; d <= a; b += 2) {
		printf("%10d%10d \n", d, c);
		c += b;
		d++;
	}

	getch();
	return 0;
}

