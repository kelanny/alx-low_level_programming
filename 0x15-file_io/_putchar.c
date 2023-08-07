#include "main.h"

/**
 * _putchar - Writes a character in stdout
 * @c: the character to print.
 *
 * Return: Always 0 (Success)
 */

int _putchar(const char c)
{
	return (write(1, &c, 1));
}
