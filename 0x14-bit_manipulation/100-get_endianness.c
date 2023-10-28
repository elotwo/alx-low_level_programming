#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * get_endianness - A function that checks the endianness
 * Return: (0)
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	if (*byte == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
