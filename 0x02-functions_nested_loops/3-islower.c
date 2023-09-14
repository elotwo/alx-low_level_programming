#include <stdio.h>
/**
 * _islower - A function that check lower case latters
 * @c: checking for lowercase latters
 * Return: (1)Success
 */
int _islower(int c)
{
	if (c > 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
