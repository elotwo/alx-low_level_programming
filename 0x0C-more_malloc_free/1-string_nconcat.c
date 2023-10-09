#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c = 0;
	unsigned int m = 0;
	 char *dem = malloc(c + n + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[c] != '\0')
	{
		c++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	if (n > m)
	{
		n = m;
	}
	if (dem == NULL)
	{
		return (NULL);
	}
	c = m = 0;

	while (s1[c] != '\0')
	{
		dem[c] = s1[c];
		c++;
	}

	while (m < n)
	{
		dem[m] = s2[m];
		c++;
	       	m++;
	}
	dem[c] = '\0';
	return (dem);
}

