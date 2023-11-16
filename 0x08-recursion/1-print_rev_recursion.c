#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - A program for printing string
 * in reverse recursively
 * @s: variable for inputing string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
