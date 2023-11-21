#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 */
int convert(char *s)
{
	int i = 0;
	int c;
	int b;

	while (s[i] != '\0')
	{
		i++;
	}
	for (c = 0; c < i; c++)
	{
		b = *s - '0';
	}
	return (b);
}
