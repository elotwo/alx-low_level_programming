#include<stdio.h>
/**
 * swap_int - A program that swap two integers
 * @a: A pionter variable
 * @b: A pointer variable
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
