#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @filename: A file path to the file.
 * @letters: Number of bytes to read.
 *
 * Return: No of letters it reads and printed otherwise returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fp;
	ssize_t length = 0;

	if (filename == NULL)
		return (0);
	fp = open("Requirescat", O_RDONLY);

	if (fp == -1)
	{
		return (0);
		close(fp);
	}
       	buffer = malloc(letters * sizeof(char));
	length = read(fp, buffer, letters);
	write(1, buffer, letters);
	free(buffer);
	close(fp);
	return (length);
}
