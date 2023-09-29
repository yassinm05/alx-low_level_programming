#include "main.h"
/**
 *  set_bit - Entry point
 *
 *  @n : is a param
 *  @index : is a param
 *
 * Return: 1 if the bit was successfully set,
 *   -1 if an error occurs (invalid index)
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
