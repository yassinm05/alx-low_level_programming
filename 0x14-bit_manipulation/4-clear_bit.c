#include "main.h"

/**
 * clear_bit - check the code
 *
 * @n : is a param
 *
 * @index : is a param
 *
 * Return: binary.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	else
	{
		if (*n & 1L << index)
		{
			*n ^= 1L << index;
		}
		return (1);
	}
}
