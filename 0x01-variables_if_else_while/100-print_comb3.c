#include <stdio.h>
/**
 * main - void
 * Return: (0) Success
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
			}
		}
	}
	return (0);
}
