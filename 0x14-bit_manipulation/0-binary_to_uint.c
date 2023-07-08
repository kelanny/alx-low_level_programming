#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a number to unsigned int.
 * @b: A binary input string.
 *
 * Return: Converted number or 0 otherwise.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = 2 * num + (b[i] - '0');

	}
	return (num);
}
