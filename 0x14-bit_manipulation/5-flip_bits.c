#include "main.h"

/**
 * flip_bits - converts a binary number string to unsigned int
 *
 * @n: is a param
 * @m : is a param
 *
 * Return: the unsigned int form of  b
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int value = n ^ m;

	while (value)
	{
		if (value & 1ul)
			count++;
		value = value >> 1;
	}
	return (count);
}
