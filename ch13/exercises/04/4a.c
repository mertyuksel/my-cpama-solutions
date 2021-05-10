
int read_line(char str[], int n)
{
	int ch, i = 0;
	while ((ch = getchar()) == ' ');
	while (ch != '\n')
	{
		if (i < n)
			str[i++] = ch;
		ch = getchar();
	}

	str[i] = '\0';
	return i;
}

