#include "main.h"

/**
 * *_strncpy - check the code.
 *
 * @dest : is a param
 *
 * @src : is a param
 *
 * @n : is a param
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int n = 2;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}