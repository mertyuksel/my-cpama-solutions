
// array approach
void censor(char a[])
{
	for (int i = 0; a[i] != '\0'; i++)
		if (a[i] == 'f' && a[i + 1] == 'o' && a[i + 2] == 'o')
			a[i] = a[i + 1] = a[i + 2] = '*';
}


// alternative pointer approach 
void censor(char* sentence, int length)
{
	for (; *sentence++;)
	{
		if ((*(sentence - 1) == 'f') && (*sentence == 'o') && (*(sentence + 1) == 'o'))
		{
			*(sentence - 1) = 'x';
			*sentence = 'x';
			*(sentence + 1) = 'x';
		}
	}
}
