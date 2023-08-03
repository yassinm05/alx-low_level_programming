#include "main.h"

/**
 * flip_bits - check the code
 *
 * @n : is a param
 *
 * @m : is a param
 *
 * Return: binary.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int X_or = n ^ m;
	unsigned int i = 0;

	while (X_or != 0)
	{
		if (X_or & 1ul)
		{
			i++;
		}
		X_or = X_or >> 1;
	}
	return (i);
}
