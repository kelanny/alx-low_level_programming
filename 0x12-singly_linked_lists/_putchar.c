#include <unistd.h>

/**
 * _putchar - Print a character to stdout.
 * @c: The character to print
 * Return: Always 0 (Success).
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}	
