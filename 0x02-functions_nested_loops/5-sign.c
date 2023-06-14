#include "main.h"
/**
 * print_sign - Prints sign depending with the number inputed
 *
 * @n: Returns a digit
 * Return: Always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
	_putchar('\n');
}
