#include "main.h"

/**
 * clear_bit - converts a binary number string to unsigned int
 *
 * @n: is a param
 * @index: is a param
 *
 * Return: the unsigned int form of  b
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num = (*n & 1L << index);

	if (index >= sizeof(n) * 8)
		return (-1);
	if (num)
		*n ^= 1L << index;
	return (1);
}
