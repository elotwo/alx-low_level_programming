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

	for (i = 0; i <= argc; i++)
	{
		printf("%s", argv[i]);
		putchar('\n');
	}
	return (0);
}
