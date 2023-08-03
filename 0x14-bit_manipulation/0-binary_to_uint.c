#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to string of characters.
 *
 * Return: Converted number or (0) otherwise.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number = (number << 1) + (b[i] - '0');
		i++;
	}
	return (number);
}
