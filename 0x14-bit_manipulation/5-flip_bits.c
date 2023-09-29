#include "main.h"

/**
 * flip_bits - Entry point
 *
 *  @n : is a param
 *  @m : is a param
 *
 * Return: the number of bits you would need 
 * to flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int count = 0;

	while (num)
	{
		if (1ul & num)
		{
			count++;
		}
		num = num >> 1;
	}
	return (count);
}
