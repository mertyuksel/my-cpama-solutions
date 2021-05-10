void capitalize(char* a)              
{                                     
	for (; *a != '\0'; a++)           
		*a = toupper(*a);
}