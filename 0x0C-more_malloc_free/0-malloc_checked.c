#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * malloc_checked - A program that check memmory allocation
 * @b: variable b
 * Return: (0)
 */
void *malloc_checked(unsigned int b)
{
	void *me = malloc(b);

	if (me == NULL)
	{
		exit(98);
	}
	return (me);
}
