#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * convert - A program thet changes the char
 * to int
 * @s: variable string for char characters
 * Return: (0)
 */
int convert(char *s)
{
	int a = 0;
	int b = 1;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-')
	{
		b = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		a = a * 10 + (*s - '0');
		s++;
	}
	return (b * a);

}
/**
 * main -  A progrma that multiply numbers on the
 * command shell
 * @argc: variable length
 * @argv: variable numbers
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error");
		putchar('\n');
		return (1);
	}
	else
	{
		a = convert(argv[1]);
		b = convert(argv[2]);
		i = a * b;
		printf("%d \n", i);
	}
	return (0);
}
