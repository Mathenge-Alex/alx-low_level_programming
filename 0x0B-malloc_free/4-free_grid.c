#include <stdlib.h>

/**
 * free_grid - Function frees the grid
 * @grid: A grid of memories
 * @height: integer
 * Return: Returns void
 */

void free_grid(int **grid, int height)
{
int j = 0;
for (; j < height; j++)
	free(grid[j]);
free(grid);
}
