#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - A function that print an array of numbers
 * @array: variable array
 * @size: size of the variable array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
