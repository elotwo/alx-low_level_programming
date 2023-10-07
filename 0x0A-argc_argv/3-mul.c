#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - A program that mutlply variable commands integer
 * @argc: viariable counter
 * @argv: variable string
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int mul;

	if (argc != 3)
	{
		return (1);
	}
	a = atof(argv[1]);
	b = atof(argv[2]);
	mul = a * b;
	printf("%d", mul);
	putchar('\n');
	return (0);
}
