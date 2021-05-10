
#include <stdio.h>

int evaluate_position(char board[4][4]);

int main()
{
	char arr[4][4] = { { 'r', 'Q', 'Q', 'q'},
					   { 'B', 'R', 'q', 'b' },
					   { 'b', 'r', 'Q', 'r' },
					   { 'b', 'R', 'Q', 'Q' } };

	printf("Difference : %d", evaluate_position(arr));

	getch();
	return 0;
}

int evaluate_position(char board[4][4])
{
	char* p = &board[0][0];
	int white = 0, black = 0;

	for (; p < &board[0][0] + 16; p++)
	{
		switch (*p)
		{
		case 'Q':
			white += 9;
			break;
		case 'R':
			white += 5;
			break;
		case 'B': case 'N':
			white += 3;
			break;
		case 'P':
			white += 1;
			break;
		case 'q':
			black += 9;
			break;
		case 'r':
			black += 5;
			break;
		case 'b': case 'n':
			black += 3;
			break;
		case 'p':
			black += 1;
			break;
		}
	}
	return white - black;
}
