#include "main.h"

/**
 * get_bit - Gets the value of a  bit at a given index.
 * @n: The unsigned integer to get bit from.
 * @index: The index of the bit to return.
 *
 * Return: (1) if bit is set, (0) if not set and -1 if errors.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	if (n & mask)
		return (1);
	return (0);
}
