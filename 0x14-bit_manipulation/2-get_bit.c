#include <stdio.h>
#include <string.h>
/**
 */
int get_bit(unsigned long int n, unsigned int index)
{	
	int i;
	if (n == 0)
	{
		return (-1);
	}
	if (index > 0)
	{
		if (index == n)
		{
			i = n & index;
			printf("%d", i);
			
		}
		else
		{
			printf("0");
		}		
	}
	return (0);
}

