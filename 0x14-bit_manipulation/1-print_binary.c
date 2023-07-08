#include <stdio.h>
#include "main.h"

/**
 * print_binary - PRints the binary representation of a number.
 * @n: The number to convert.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
