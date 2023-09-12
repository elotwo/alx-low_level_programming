#include <stdio.h>
/**
 * print_alphabet - void
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
