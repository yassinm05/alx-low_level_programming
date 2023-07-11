#include "main.h"
#include <stdlib.h>

/**
 * free_grid - check the code
 *
 * @grid: is a param
 *
 * @height: is a param
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
