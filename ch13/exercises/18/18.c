void remove_filename(char *url)
{
	while (*url)
		url++;

	while (*--url)    
		if (*url == '/')
		{
			*url = '\0';
			return;
		}
}