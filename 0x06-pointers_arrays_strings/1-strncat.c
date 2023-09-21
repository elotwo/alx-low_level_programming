#include <stdio.h>
#include <string.h>
/**
 * _strncat - A program that joins two strings together
 * @dest: pointer variable
 * @src: pointer variable
 * @n: represent the number of bytes
 * Return: (0)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_end = *src;
		dest_end++;
		src++;
		n--;
	}
	*dest_end = '\0';
	return (dest);
}
