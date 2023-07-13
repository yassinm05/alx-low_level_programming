#include "main.h"
#include <stdlib.h>

/**
 * *array_range - check the code
 *
 * @min : is a param
 *
 * @max : is a param
 *
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
