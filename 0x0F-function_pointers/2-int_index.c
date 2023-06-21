#include "function_pointers.h"

/**
 * int_index - This function searches for an integer
 * @array: the pointer to array of integers
 * @size: Size of the array
 * @cmp: pointer to a functiont that will compare
 *
 * Return: 0 if successful or else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
