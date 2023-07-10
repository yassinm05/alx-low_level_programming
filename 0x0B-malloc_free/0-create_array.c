#include "main.h"
#include <stdlib.h>

/**
 * *create_array - check the code
 *
 * @size : is a param
 *
 * @c : is a param
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *str = (char *)malloc(sizeof(*str) * size);
	unsigned int i;

	if (size == 0 || str == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
