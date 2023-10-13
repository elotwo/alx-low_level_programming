#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - A function that prints strings
 * @separator: A variable character that separate strings
 * @n: variable n indicate the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *b;
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
			b = va_arg(count, char *);
			if (b == NULL)
			{
				printf("nill");
			}
			else
			{
				printf("%s", b);
			}
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(count);
}
