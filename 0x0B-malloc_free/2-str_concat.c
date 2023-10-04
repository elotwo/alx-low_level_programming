#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == 0 || s2 == 0)
	{
		return (NULL);
	}
	size_t total_len;
	total_len = strlen(s1) + strlen(s2) + 1;
	char *cat = (char *)malloc(total_len);

	if (cat == 0)
	{
		return(NULL);
	}
	strcat(cat, s1);
	strcat(cat, s2);
	*cat = *s1;
	return (cat);
}
