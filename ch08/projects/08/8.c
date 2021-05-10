
#include <stdio.h>
#define N 5 

int main()
{
	int arr[N][N];
	int i, j, total = 0, avg[N] = {0}, tot[N] = { 0 };
	int avg2[N] = { 0 }, tot2[N] = { 0 }, high[N] = { 0 }, low[N] = { 100, 100, 100, 100, 100 };
	
	for ( i = 0; i < N; i++)
	{
		printf("Student %d: ", i+1);
		for ( j = 0; j < N; j++)
			scanf_s("%d", &arr[i][j]);
	}
	
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			tot[i] += arr[i][j];       
		avg[i] += tot[i] / 5;
	}

	printf("\nStudent   Total   Average \n");
	for ( i = 0; i < N; i++)
		printf("%4d%10d%9d\n", i+1, tot[i], avg[i]);
		
	for ( i = 0; i < N; i++)
	{
		for ( j = 0; j < N; j++)
			tot2[i] += arr[j][i];
		avg2[i] += tot2[i] / 5;
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (arr[j][i] > high[i])
				high[i] = arr[j][i];

			if (arr[j][i] < low[i])
				low[i] = arr[j][i];
		}
	}
	
	printf("\nQuiz  Average  High  Low \n");
	for (i = 0; i < N; i++)
		printf("%3d%8d%7d%6d\n", i + 1, avg2[i], high[i], low[i]);

	getch();
	return 0; 
}

