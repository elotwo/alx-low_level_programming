#include <stdio.h>
/**
 * _pow_recursion - A program that print the exponatial
 * of a number
 * @x: variable input number
 * @y: variable exponebtial number
 * Return: (0)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return ((x) * _pow_recursion(x, y - 1));
}
