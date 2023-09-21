#include <stdio.h>
/**
 * _strcat - A program that joins two strings
 * @dest: pointer variable
 * @src: pointer variable
 * Return: (0)
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
