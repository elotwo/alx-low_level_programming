#include <stdio.h>
#include <math.h>
/**
 */
int _sqrt_recursion(int n)
{
	int sum;
	int j;
	if (n < 0) 
	{
		return (-1);
	}
	for (j = 0; j < n; j++)
	{
		sum = j * j;
		if (sum == n)
			break; 
	}
	return (j);
}
