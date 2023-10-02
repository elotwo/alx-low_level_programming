#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - A program that find the square of a number
 * @n: variable n
 * Return: (0)
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n / _sqrt_recursion(n) == n);
}
