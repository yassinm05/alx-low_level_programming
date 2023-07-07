#include "main.h"

/**
 * *_memset - check the code.
 *
 * @s : is a param
 *
 * @b : is a param
 *
 * @n : is a param
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
