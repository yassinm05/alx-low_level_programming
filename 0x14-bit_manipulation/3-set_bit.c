#include "main.h"

/**
 * set_bit - check the code
 *
 * @n : is a param
 *
 * @index : is a param
 *
 * Return: binary.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	else
	{
		return (!!(*n |= 1L << index));
	}
}