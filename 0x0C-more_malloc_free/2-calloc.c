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
	void *arr;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == 0)
	{
		return (NULL);
	}
	ptr = arr;
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (arr);
}
