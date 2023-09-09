#include <stdio.h>
#include <stdlib.h>
/**
 * main - void
 * Return: (0) Success
 */
int main(void)
{
	char alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
