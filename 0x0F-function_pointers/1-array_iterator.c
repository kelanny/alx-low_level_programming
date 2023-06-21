#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - A function that iterates through array and pass an element
 * @array: a pointer to an array
 * @size: The size of the array
 * @action: A pointer to a function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL && action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
