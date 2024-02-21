#include "main.h"

/**
 * flip_bits - Returns the no of bits one need to flip to get to a number.
 * @n: one of the numbers to check.
 * @m: The second number to check from.
 *
 * Return: number of bits needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit_count = 0;
	unsigned long int current, xor_result;

	xor_result = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		current = xor_result >> i;
		if (current & 1)
			bit_count++;
	}
	return (bit_count);
}
