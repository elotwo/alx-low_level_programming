#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - A program that prints the sum of numbers
 * @n: variable n for numbers
 * Return: (0);
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int zum = 0;
	va_list count;

	va_start(count, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			zum = zum + va_arg(count, unsigned int);
		}
	}
	va_end(count);
	return (zum);
}
