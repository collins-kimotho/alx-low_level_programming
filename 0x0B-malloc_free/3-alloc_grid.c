#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of intgers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: if width or height is 0 or negative, of if the function fails - NULL
 * Otherwise - a pointer t the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	/*If width or height is 0 or negative, return NULL*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*Allocate memory for grid*/
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* Free everything if malloc fails */
			while (i--)
				free(grid[i]);
			free(grid);

			return (NULL);
		}
	}

	/* Initialize each element of the grid to 0 */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}
