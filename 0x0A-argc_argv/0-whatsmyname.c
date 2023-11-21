#include <stdio.h>
#include <string.h>
/**
 * main - A preogram that prints its name
 * @argc: variable length of arguiment
 * @argv: vriable command
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int j;

	if (argc > 0)
	{
		for (j = 0; j < argc; j++)
		{
			printf("%s", argv[j]);
		}
		putchar('\n');
	}
	return (0);
}
