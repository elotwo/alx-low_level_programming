#include <stdio.h>
/**
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
	{
		return;
	}
	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
