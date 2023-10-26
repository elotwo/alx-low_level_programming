#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - A function that convert decimals to
 * binary
 * @b: variable input where binary are tp be entered;
 * Return: (0)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = strlen(b);
	int i;

	if (b == NULL)
	return (0);
	for (i = 0; i < length; i++)
	{
		if (b[i] == '0')
		{
			result = (result << 1);
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
		return (0);
		}
	}
	return (result);
}
