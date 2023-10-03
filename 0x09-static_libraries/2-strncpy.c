#include <stdio.h>
#include <string.h>
/**
 * _strncpy - A copy Program
 * @dest: A destination variable
 * @src: A source variable
 * @n: Size of the souce
 * Return: (0)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *og = dest;

	if (*og != '\0')
	{
		while (*src != '\0' && n > 0)
		{
			*og = *src;
			og++;
			src++;
			n--;
		}
	}
	while (n > 0)
	{
		*og = '\0';
		og++;
		n--;
	}
	return (dest);
}
