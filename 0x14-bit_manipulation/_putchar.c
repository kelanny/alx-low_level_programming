#include <unistd.h>

/**
 * _putchar - Prints a character c to the stdout.
 * @c: A character to be printed.
 *
 * Return: Always 0 (Success).
 */

int _putchar(const char c)
{
	return (write(1, &c, 1));
}
