#include "main.h"

/**
 * get_bit - check the code
 *
 * @n : is a param
 *
 * @index : is a param
 *
 * Return: binary.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = n >>index & 1;
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	else
	{
		return (bit);
	}
}

