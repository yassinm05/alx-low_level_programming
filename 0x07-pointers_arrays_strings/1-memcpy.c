#include "main.h"

/**
 * *_memcpy - check the code.
 *
 * @dest : is a param
 *
 * @src : is a param
 *
 * @n : is a param
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
