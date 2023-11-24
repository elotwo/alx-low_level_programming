#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isnumber - A program that check if a number
 * is a digit
 * @str: variable string for digit
 * Return: (0)
 */
int isnumber(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - A progrm that multiply two numbers
 * @argc: variable length
 * @argv: variable string
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int mul;
	int num1, num2;

	if (argc != 3)
	{
		printf("ERROR\n");
		exit(98);
	}
	if (!isnumber(argv[1]) || !isnumber(argv[2]))
	{
		printf("ERROR\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d \n", mul);
	return (0);
}
