#include "main.h"

void close_descriptor(int fd);
void print_error(const char *filename, int exit_code, char *error_msg);

#define BUFFER_SIZE 1024

/**
 * close_descriptor - Closes an open file descriptor
 * @fd: Descriptor to be closed.
 *
 * Return: Always 0 (Success) otherwise -1.
 */

void close_descriptor(int fd)
{
	int closer;

	closer = close(fd);
	if (closer != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", closer);
		exit(100);
	}
}
/**
 * print_error - Prints error to stderr output.
 * @filename: Name of the file returning error.
 * @exit_code: The exit code to exit withi.
 * @error_msg: The message to print to stderr.
 * Return: Nothing.
 */

void print_error(const char *filename, int exit_code, char *error_msg)
{
	dprintf(STDERR_FILENO, "%s %s\n", error_msg, filename);
	exit(exit_code);
}

/**
 * main - Entry point of the program.
 * @argc: no of command line arguments supplied.
 * @argv: A ponter to an array of strings.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_rd, bytes_wr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s %s %s\n", argv[0], argv[1], argv[2]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	bytes_rd = read(fd_from, buffer, BUFFER_SIZE);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd_from == -1 || bytes_rd == -1)
			print_error(argv[1], 98, "Error: Can't read from file");
		bytes_wr = write(fd_to, buffer, bytes_rd);
		if (fd_to == -1 || bytes_wr == -1)
			print_error(argv[2], 99, "Error: Can't write to");
		bytes_rd = read(fd_from, buffer, BUFFER_SIZE);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_rd > 0);
	close_descriptor(fd_from);
	close_descriptor(fd_to);
	return (0);
}
