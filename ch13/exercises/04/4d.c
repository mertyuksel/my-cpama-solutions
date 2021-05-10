int read_line(char str[], int n)
{
	int ch, i = 0;
	while (i < n - 1)
	{
		if ((ch = getchar()) == '\n')
			break;
		if (i == 0 && isspace(ch))
			;
		else if (i < n)
			str[i++] = ch;
	}

	str[i] = '\0';
	return i;
}