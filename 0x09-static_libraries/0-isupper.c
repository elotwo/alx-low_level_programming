#include<stdio.h>
/**
 *  _isupper - checking for uppercase latters
 *  @c: virable for checking uppercase latters
 *  Return: (1)Success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
