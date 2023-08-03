#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to integer to be changed.
 * @index: The index of the bit to be set to 1.
 *
 * Return: (1) if successful, (-1) if any error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
