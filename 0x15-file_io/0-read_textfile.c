#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: A pointer to the filename string
 * @letters: Number of letters to read from the textfile
 * Return: No of letters read or 0 otherwise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, bytes;
	int fd;
	char *buffer;


	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, rd);
	if (bytes == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes);
}
