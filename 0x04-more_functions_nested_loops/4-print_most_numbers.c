#include <stdio.h>
/**
 * print_most_numbers - void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
}
