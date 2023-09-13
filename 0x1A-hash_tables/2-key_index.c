#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Returns an index of a key implementing djb2 algorithm.
 * @key: The key to find index for.
 * @size: The size of the array.
 *
 * Return: Index where key/value should be stores inthe array of the hash_table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
