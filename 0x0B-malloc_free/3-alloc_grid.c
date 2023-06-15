#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function  returns a pointer to a 2 dim array of integers
 * @width: Input int variable for array dimension
 * @height: Input int variable for array dimension
 *
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		x[a] = malloc(sizeof(int) * width);
		if (x[a] == NULL)
		{
			for (b = a; b >= 0; a--)
			{
			free(x[b]);
			}
			free(x);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
		x[c][d] = 0;
		}
	}
	return (x);
}
