#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - A program that join two strings
 * together with a limit ont secound string
 * @s1: variable for first ststring
 * @s2: variable for secound string
 * @n: limit for secound string
 * Return: (0)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *newstring;
	unsigned int i = 0;
	unsigned int k;
	unsigned int m = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	if (n >= m)
	{
		newstring = (char *)malloc(sizeof(char *) * m);
	}
	else
	{
		newstring = (char *)malloc(sizeof(char) * (i + n + 1));
	}
	if (newstring == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
		newstring[k] = s1[k];
	for (i = 0; i < n; i++)
	{
		newstring[k] = s2[i];
		k++;
	}
	newstring[k] = '\0';
	return (newstring);
}
