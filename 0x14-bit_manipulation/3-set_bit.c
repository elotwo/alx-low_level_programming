#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * set_bit - A proram that convert binary to decimal
 * @n: variable for binaary numbers
 * @index: variable binary position
 * Return: (0)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
