#include <stdio.h>
/**
 * main - void
 * Return: (0)Success
 */
int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	putchar ('\n');
	return (0);
}	
