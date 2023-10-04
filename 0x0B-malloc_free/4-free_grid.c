#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D grid
 * @height: The height of the grid.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Free each row of the grid */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the grid */
	free(grid);
}
