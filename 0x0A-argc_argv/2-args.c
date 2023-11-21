#include <stdio.h>
#include <string.h>
/**
 * main - A proram that prints all arguiment
 * @argc: a variable that holds the number of commands
 * @argv: A variable strings that hold number of commands
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	return (0);
}
