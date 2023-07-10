#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid from the heap.
 * @grid: 2D array.
 * @height: the number of rows.
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int k;

	if (grid == NULL || height == 0)
		return;

	for (k = 0; k < height; k++)
		free(grid[k]);

	free(grid);
}
