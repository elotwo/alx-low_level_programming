#include <stdio.h>
/**
 */
void reverse_array(int *a, int n)
{
	while (n > 0)
	{
		putchar(a[n]);
		a--;
		n--;
	}
	putchar('\n');
}
