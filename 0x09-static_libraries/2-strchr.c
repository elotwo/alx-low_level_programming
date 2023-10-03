#include <stdio.h>
#include <string.h>
/**
 * _strchr - Entery point
 * @s: input
 * @c: input
 * Return:(0)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
