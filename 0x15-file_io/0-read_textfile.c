#include <stdlib.h>
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
	ssize_t readbytes, writebytes;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));
	readbytes = read(fp, buffer, letters);
	writebytes = write(STDOUT_FILENO, buffer, readbytes);
	if (writebytes == -1 || readbytes != writebytes)
	{
		close(fp);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fp);
	return (readbytes);
}
