#include "string.h"
int my_strlen(char *c)
{
	int counter = 0;
	while ( c[counter] !='\0')
	{
		counter ++ ;
	}
	return counter;
}

void mystrcpy(char *s,char *d)
{
	int counter = 0;
	while ( s[counter] !='\0')
	{
		d[counter] = s[counter];
		counter ++ ;
	}
}
int str2upper( char *s )
{
	int counter = 0;
	int changed =0; 
	while (s[counter] !='\0')
	{
		if (s[counter] > 96 && s[counter] <123)
		{
			s[counter]= s[counter]-32;
			changed ++;
		}
		counter ++;
	}
	return changed;
}
