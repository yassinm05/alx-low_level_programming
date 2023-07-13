#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - check the code
 *
 * @b : is a param
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
}
