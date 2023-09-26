#include <stdio.h>
#include <string.h>
/**
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
