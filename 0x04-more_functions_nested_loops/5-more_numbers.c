#include <stdio.h>
/**
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0;  a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				putchar(b);
				putchar(b % 10 + '0');
			}
		}
		putchar('\n');
	}
}
