#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 */
int main(void)
{
	FILE *fname1, *fname2;
	char file_from, file_to;
	int length = 0;
	while (file_from[length] != '\0')
	{
		length++;
	}
	scanf("%s", file_from);
	fname1 = fopen(file_from, "r");
	if (file_from == NULL || file_to == NULL)
	{
		exit(97);
		fprintf(stderr, "Usage: cp file_from file_to.\n");
	}
	if (!file_to)
	{
		ftruncate(file_to, length);
	}
	fname2 = fopen(file_from, "w");
	file_to  = fgetc (fname1);
	while (file_to  != EOF)
	{
		fputc(c, fname2);
		file_to = fgetc(fname1);
	}




