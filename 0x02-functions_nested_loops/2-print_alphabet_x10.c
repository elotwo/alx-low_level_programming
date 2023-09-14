#include <stdio.h>
/**
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
