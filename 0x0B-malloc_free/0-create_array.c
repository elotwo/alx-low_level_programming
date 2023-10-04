#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - A program that print chararcters
 * @size: variable size
 * @c: variable character
 * Return: (0)
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
