#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - check the code
 *
 * @width: is a param
 *
 * @height: is a param
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * width);
	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(**arr) * height);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
