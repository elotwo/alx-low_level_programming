#include <stdio.h>
#include <string.h>
/**
 * _strspn - Entery point
 * @s: a pointer variable c
 * @accept: A pointer variable accept
 * Return: (0)
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t count = 0;

	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
