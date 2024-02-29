#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to unsigned int.
 * @index: The index for which to clear bits.
 *
 * Return: (1) if Successful, otherwise (-1).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= (~(1UL << index) & *n);
	return (1);
}
