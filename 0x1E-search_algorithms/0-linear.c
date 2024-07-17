#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * linear_search - This is a script that loops through an array.
 * @array: this holds the first value of the array
 * @size: this hold the size of the array
 * @value: this hold the value to be search for
 * Return: (0)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int c = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		printf("value checked array[%d] = [%d]\n", c, array[i]);
		if (array[i] == value)
		{
		return (i);
		}
		i++;
		c++;
	}
return (-1);
}
