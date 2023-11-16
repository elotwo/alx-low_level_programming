#include <stdio.h>
#include <string.h>
/**
 * factorial - A program that calculate the factorial
 * of a number
 * @n: variable where variable number is
 * imputed
 * Return: (0)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return ((n) * factorial(n - 1));
}
