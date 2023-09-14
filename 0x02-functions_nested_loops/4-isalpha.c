#include<stdio.h>
/**
 * _isalpha - A program for check upper and lower case latters
 * @c: an int variable for checking latters
 * Return: (1)Success
 */
int _isalpha(int c)
{
	if (c > 97 && c <= 122)
	{
		return (1);
	}
	else if (c > 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
