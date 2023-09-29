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
		result = (*b++ - '0') + (result * 2);
	}
	return (result);
}
