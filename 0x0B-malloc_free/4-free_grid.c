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
	int j = 0;

	while (i < height)
	{
		while (grid[j] != NULL)
		{
			free(grid[j]);
			j++;
		}
		i++;
		j = 0;
	}
	free(grid);
}
