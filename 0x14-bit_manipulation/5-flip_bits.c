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
	unsigned int bit_count = 0;
	unsigned long int xor_result;

	xor_result = n ^ m;
	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		bit_count++;
	}
	return (bit_count);
}
