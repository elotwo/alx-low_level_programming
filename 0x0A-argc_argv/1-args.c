#include <stdio.h>
#include <string.h>
/**
 * main - A program that prints number of commands
 * @argc: A variable that hold the number of commands
 * @argv: variable string that holds commands variable
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d", argc -1);
		putchar('\n');

	}
	return(0);
}
