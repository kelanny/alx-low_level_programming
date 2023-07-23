#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void _close_file(int descriptor);
char *create_buffer();

/**
 * *create_buffer - Creates a buffer to hold text tempolary
 *  @size: buffer size.
 * Return: A pointer to the created buffer.
 */


char *create_buffer()
{
	char *buffer;

	buffer = (char *)malloc(MAX_LEN);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 * _close_file - Closes file descriptor passed to it.
 * @descriptor: A file descriptor.
 *
 * Return: Nothing.
 */

void _close_file(int descriptor)
{
	int res;

	res = close(descriptor);
	if (res == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", descriptor);
		exit(100);
	}
}

/**
 * main - The program entry point.
 * @argc: Number of commandline arguments..
 * @argv: A pointer to array of command strings.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int from_desc, to_desc, r_bytes, w_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(MAX_LEN);

	from_desc = open(argv[1], O_RDONLY);
	r_bytes = read(from_desc, buffer, MAX_LEN);
	to_desc = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	do {
		if (from_desc == -1 || r_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(98);
		}
		w_bytes = write(to_desc, buffer, r_bytes);
		if (to_desc == -1 || w_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r_bytes = read(from_desc, buffer, MAX_LEN);
		to_desc = open(argv[2], O_WRONLY | O_APPEND);
	} while (r_bytes > 0);
	free(buffer);
	_close_file(from_desc);
	_close_file(to_desc);
	return (0);
}
