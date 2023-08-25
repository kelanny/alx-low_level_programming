#include <unistd.h>
#include "main.h"

/**
 * _puts - Prints a string to the stdout.
 * @str: String to print.
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
