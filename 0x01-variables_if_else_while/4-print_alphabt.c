#include <stdio.h>
/**
 * main - void
 * Return: (0) Success
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (alpha == 113 || alpha == 101)
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
