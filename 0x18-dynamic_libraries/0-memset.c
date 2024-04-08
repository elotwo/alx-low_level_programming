#include <stdio.h>
#include <string.h>
/**
 * _memset - A program that fills memories
 * @s: A pointer to the memory location where to set value
 * @b: the bit value where memory is to be set
 * @n: number of byte to set
 * Return: (s)
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
