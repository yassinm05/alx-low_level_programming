#include "main.h"
/**
 *  binary_to_uint - Entry point
 *
 *  @b : is a param
 *
 *  return : the unsigned int after convert b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
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
