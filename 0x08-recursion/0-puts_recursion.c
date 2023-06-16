#include "main.h"

/**
 * _puts_recursion - This function work like puts
 * @s: Input string to be printed
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
