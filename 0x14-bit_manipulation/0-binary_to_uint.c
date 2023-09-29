#include "main.h"
/**
 *  binary_to_uint - Entry point
 *
 *  @b : is a param
 *
 *Return: The converted unsigned integer, or 0 if an error occurs or
 *the binary string is invalid.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b++ - '0');
	}
	return (result);
}
