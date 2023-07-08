#include "main.h"

/**
 * set_bit - Sets a bit value to a given index.
 * @n: The pointer to number to change bit.
 * @index: The index of the the bit to change.
 *
 * Return: ! if successful otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
