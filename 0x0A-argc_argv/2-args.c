#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - A proram prints all variables cammands
 * @argc: variable counter
 * @argv: variable string
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("%s", argv[0]);
		putchar('\n');
		return (1);
	}
	for (i = 0; i <= argc; i++)
	{
		if ( argv[i] != NULL)
		{
			printf("%s \n", argv[i]);
		}
	}
	return (0);
}
