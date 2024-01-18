#include <stdio.h>
#include <math.h>
#include <sys/param.h>
#include "search_algos.h"

/**
 * jump_search - Search for a value in a sorted array using Jump Search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t i;
	size_t left = 0;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);

	while (array[MIN(step, size) - 1] < value)
	{
		left = step;
		step += sqrt(size);
		if (left >= size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, step);
	for (i = left; i < MIN(step, size); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
