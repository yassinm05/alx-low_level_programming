#include "main.h"

/**
 * *_strncat - check the code.
 *
 * @dest : is a param
 *
 * @src : is a param
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = len; j <= n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
