#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "main.h"
/**
 * create_file - A program that create file with only owner
 * permission
 * @filename: varible name for name of file
 * @text_content: variable for file content
 * Return: (0)
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;
	int i;
	int length = 0;
	char *file_content;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	while (text_content[length] != '\0')
	{
		length++;
	}
	file_content = (char *)malloc(sizeof(char) * length + 1);
	if (file_content == NULL)
	{
		return (-1);
	}
	for (i = 0; file_content[i] < length; i++)
	{
		file_content[i] = text_content[i];
	}
	file = fopen(filename, "w");
	if (file == NULL)
	{
		free(file_content);
		return (-1);
	}
	fprintf(file, "%s", file_content);
	fclose(file);
	free(file_content);
	chmod(filename, S_IRUSR | S_IWUSR);
	return (1);
}
