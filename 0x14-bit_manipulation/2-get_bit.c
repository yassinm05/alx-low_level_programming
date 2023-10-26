#include "main.h"
/**
 * get_bit - converts a binary number string to unsigned int
 *
 * @n: is a param
 *
 * @index: is a param
 *
 * Return: the unsigned int form of  b
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index & 1);

	if (index >= sizeof(n) * 8)
		return (-1);
	return (bit);
}
