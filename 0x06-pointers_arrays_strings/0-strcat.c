#include "main.h"

/**
 * *_strcat - check the code.
 *
 * @dest : is a param
 *
 * @src : is a param
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = len; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	s1[i] = '\0';
}
