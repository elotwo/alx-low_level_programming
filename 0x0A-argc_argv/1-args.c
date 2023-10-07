#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints numbers of variables
 * @argc: variable counter
 * @argv: variable string
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
	printf("%d", argc - 1);
	putchar('\n');
	}
	return (0);
}
