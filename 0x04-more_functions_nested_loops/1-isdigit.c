#include <stdio.h>
/**
 *  _isdigit - program for checking digit
 *  @c: viriable for checking digit
 *  Return: (1)Success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
