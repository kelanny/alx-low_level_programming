#include <unistd.h>

/**
 * _putchar - prints character to stdout.
 * @c: character to print.
 *
 * Return: Always 0.
 */

int _putchar(char c)
{
	return (write(1, &c, sizeof(c)));
}
