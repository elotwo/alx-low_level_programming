#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that takes arguiments of numbers and print
 * them
 * @separator: variable character that separate the numbers
 * @n: variable n represent the arguiment of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int b;
	va_list count;

	va_start(count, n);
	if (separator == NULL)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			b = va_arg(count, unsigned int);
			printf("%s%d", separator, b);
		}
		printf("\n");
	}
	va_end(count);
}
