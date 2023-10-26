#include "main.h"

/**
 * binary_to_unit - converts a binary number string to unsigned int
 *
 * @b : is a param
 *
 * return :the unsigned int form of  b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		value = value * 2 + (*b++ - '0');
	}
	return (value);
}
