#include <unistd.h>

/**
 * _putchar - Prints a character to the standard output.
 * @c: The charactear to be printed.
 *
 * Return: Always 0 (Success).
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
