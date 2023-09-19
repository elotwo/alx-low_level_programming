#include <stdio.h>
#include <string.h>
/**
 * puts_half - A program that print half string
 * @str: A pointer Varable
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int n;
	int i;

	if (str == NULL)
	{
		return;
	}
	if (length % 2 == 1)
	{
		n = (length - 1) / 2;
	}
	else
	{
		n = length / 2;
	}
	for (i = length - n; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
