#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *main - A Program print its name on a command line
 * @argc: variable counter
 * @argv: varible name
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s", argv[i]);
		}
	}
	putchar('\n');
	return (0);
}
