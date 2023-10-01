#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - A recursive string length program
 * @s: pointer variabele s
 * Return: (0)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
