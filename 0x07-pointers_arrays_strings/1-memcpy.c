#include <stdio.h>
#include <string.h>
/**
 * _memcpy - Entery point
 * @dest: destination for the copy files
 * @src: source of the copy area
 * @n: bytes size of the copy files
 * Return: (0)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest = *src;
		dest++;
		n--;
	}
	return (dest);
}
