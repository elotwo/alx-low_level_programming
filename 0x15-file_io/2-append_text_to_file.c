#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "main.h"
/*
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}
	ts(text_content, file);
	fclose(file);
	return (1);
}
