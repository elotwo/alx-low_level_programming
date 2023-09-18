#include <stdio.h>
/**
 * puts2 - A program that prints every chareacter on a string
 * @str: A pointer variable
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
	{
		return;
	}
	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
