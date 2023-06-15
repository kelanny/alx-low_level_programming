#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function create array of siz e (size) and assign char c
 * @size: input parameter for size of the array
 * @c: input parameter with character to assign
 *
 * Return: A pointer to array, and NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
