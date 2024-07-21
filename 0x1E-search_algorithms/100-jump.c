#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t s = sqrt(size);
	size_t p = 0;

	if (array == NULL)
	{
		return ( -1);
	}
	while (array[min(s, size) - 1] < value)
	{
		p = s;
		step += sqrt(size);
		if (p >= size)
		{
			return -1;
		}
	}
	while (array[p] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		p++;
		if (p == min(s, size))
			return -1;
	}
	if (array[p] == value )
		return (p);
	return(-1);
}				     
