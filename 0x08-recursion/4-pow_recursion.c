#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - A program that rases to power
 * @x: variable x
 * @y: variable y
 * Return: (0)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
