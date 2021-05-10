
#include <stdio.h>
#define N 10

int main(void)
{
	double ident[N][N], *p;
	int count = N;

	for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++) 
		if (count == N) 
		{
			*p = 1.0;
			count = 0;
		}
		else 
		{
			*p = 0.0;
			count++;
		}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%.1lf  ", ident[i][j]);
		printf("\n\n");
	}

	getch();
	return 0;
}

