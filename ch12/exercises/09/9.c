
#include <stdio.h>
#define N 5

double inner_product(const double* a, const double* b, int n);

int main(void)
{
	double  m[N] = { 9.8, 6, 5.0, 4.6, 3.2 };
	double  n[N] = { 5.1, 9.5, 7.2, 1.7, 3.4 };

	printf("Result: %lf ", inner_product(m, n, N));

	getch();
	return 0;
}

double inner_product(const double* a, const double* b, int n)
{
	double sum = 0.0;
	double* p;

	for (p = a; a < p + n; a++, b++)
		sum += *a * *b;
	return sum;
}
