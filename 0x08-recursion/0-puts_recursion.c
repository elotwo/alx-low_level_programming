#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - printing string
 * @s: pointer s
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
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
