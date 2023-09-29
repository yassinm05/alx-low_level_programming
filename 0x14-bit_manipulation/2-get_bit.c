#include "main.h"
/**
 *  get_bit - Entry point
 *
 *  @n : is a param
 *  @index : is a param
 *
 *  Return: The value of the bit at the specified index (0 or 1),
 *     or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
