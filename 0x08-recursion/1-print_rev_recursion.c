#include "main.h"

/**
 * _print_rev_recursion - The function prints a string in reverse
 * @s: Input string to be printed
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
