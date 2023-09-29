#include "main.h"
/**
 * clear_bit - Entry point
 *
 * @n : is a param
 * @index : is a param
 *
 * return: 1 if successfull, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num = (*n & 1L << index);

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	if (num)
	{
		*n ^= 1L << index;
	}
	return (1);
}
