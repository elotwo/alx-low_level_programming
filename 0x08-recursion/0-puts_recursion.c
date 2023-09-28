#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - printing string
 * @s: pointer s
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
