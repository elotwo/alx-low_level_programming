#include<stdio.h>
#include<string.h>
/**
 * _strcmp - A program for comparing strings
 * @s1: first varaible string
 * @s2: secound variable string
 * Return: (0)
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
	{
		return (-15);
	}
	else if (s1 > s2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
