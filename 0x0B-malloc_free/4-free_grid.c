#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function frees a 2 dimensional grid
 * @grid: Input array parameter
 * @height: Input array parameter
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
