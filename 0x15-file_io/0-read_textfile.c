#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - A program that reads text files
 * @filename: variable name of the text file
 * @letters: variable size of the text file
 * Return: (0)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_read_latter = 0;
	FILE *file;
	ssize_t num_read_letter;
	ssize_t num_letters_written;
	char *buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		free(buffer);
		return (0);
	}
	num_read_letter = fread(buffer, 1, letters, file);
	if (num_read_letter == -1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[num_read_latter] = '\0';
	num_letters_written = write(STDOUT_FILENO, buffer, num_read_letter);
	if (num_letters_written == -1 ||
			(size_t)num_letters_written != (size_t) num_read_letter)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (num_read_letter);
}
