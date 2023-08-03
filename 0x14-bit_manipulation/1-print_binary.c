#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to represent in binary.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	int i, bit_size = 0;
	unsigned long int mask;

	for (i = 63; i >= 0; i--)
	{
		mask = n >> i;
		if (mask & 1)
		{
			_putchar('1');
			bit_size++;
		}
		else if (bit_size)
		{
			_putchar('0');
		}
	}
	if (!bit_size)
		_putchar('0');
	_putchar('\n');
}
