#include <stdio.h>
/**
 * _strcat - A program that joins two strings
 * @dest: pointer variable
 * @src: pointer variable
 * Return: (0)
 */
char *_strcat(char *dest, char *src)
{
	int i;

	if (*dest != '\0')
	{
		for (i = 0; dest[i] <= 20; i++)
		{
			putchar(dest[i]);
		}
		for (i = 0; src[i] <= 30; i++)
		{
			putchar(src[i]);
		}
	}
	*dest = '\0';
	putchar('\n');
	return (0);
}
