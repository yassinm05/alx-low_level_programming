#include "main.h"

/**
 * binary_to_uint - check the code
 *
 * @b : is a param
 *
 * Return: binary.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = result * 2 + (b[i] - '0');
		i++;
	}
	return (result);
}
