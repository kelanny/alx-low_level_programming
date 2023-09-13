#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_djb2 - A hash function that implement djb2 algorithm.
 * @str: A String of the key to process.
 *
 * Return: An unsigned long integer to use as an index.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	unsigned long int i;

	hash = 5381;
	while ((i = *str++))
	{
		hash = ((hash << 5) + hash) + i;
	}
	return (hash);
}
