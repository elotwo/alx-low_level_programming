#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i;
	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;
		printf("searching in array:");
		for (i = left; i <= right; i++)
		{
			printf(" %u," , array[i]);
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
