#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: pointer to the grid
 * @height: the row
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
