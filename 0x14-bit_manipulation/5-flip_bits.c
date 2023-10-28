#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * flip_bits - A function that count the number of flip bits
 * @n: veriable for number n
 * @m: variale for number m
 * Return: (0)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
