#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - check the code
 *
 * @nmemb : is a param
 *
 * @size : is a param
 *
 * Return: Always 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	unsigned int *arr;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	arr = malloc (size * nmemb);
	if (arr == 0)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
