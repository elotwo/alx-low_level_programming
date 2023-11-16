#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts_recursion - A program that print a string recursively
 * @s: variable for input string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar (*s);
		_puts_recursion(s + 1);
	}

}
