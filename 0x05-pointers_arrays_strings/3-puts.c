#include <stdio.h>
/**
 * _puts - A program that prints strings
 * @str: A pointer varable
 */
void _puts(char *str)
{
	while  (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
