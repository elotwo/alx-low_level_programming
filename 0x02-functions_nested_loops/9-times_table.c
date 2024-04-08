#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 */
void times_table(void)
{
	int i;
	int d = 0;
	int e;
	for (i = 0; i < 9; i++)
	{
		while (d <= 9)
		{
			for (e = 0; e <= 9; e++)
			{
				printf("%4d", d * e);
				putchar(',');
			}
			d++;
			putchar('\n');
		}
	}
}
