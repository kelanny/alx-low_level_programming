#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of ints using Binary
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: index of the value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
	mid = (left + right) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	mid = (left + right) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}
	return (-1);
}
