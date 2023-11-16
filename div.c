#include <stdio.h>
#include <string.h>
/**
 */
int split(char *split)
{
	int i = 0; 
	int j;
	int *z;
	while (split[i] = '\0')
	{
		i++;
	}
	for (j = 0; j < i; i++)
	{
		z = split % 2;
		if (split= 0)
		{
			putchar(*split);
		}
	}
	putchar('\n');
	return (0);
}
/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char *str;

	        str = "0123456789";
		    split(str);
		        return (0);
}
