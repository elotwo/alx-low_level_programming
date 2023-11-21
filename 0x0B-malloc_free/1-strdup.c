#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - A program that duplicate strings
 * @str: variable string to be duplicated
 * Return: (0)
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dup = (char *)malloc(sizeof(char) * len + 1);

	if (*str == 0)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
