#include "main.h"

/**
 * get_bit - Gets the bit of a number at a given index.
 * @n: Integer value.
 * @index: Index of the bit in the array.
 * Return: Value of bit in index or -1 otherwise.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);
	val = (n >> index) & 1;
	return (val);
}
