#include <stdio.h>
/**
 * main -void
 * Return: (0) Success
 */
int main(void)
{
	char a = 97;
	char b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
