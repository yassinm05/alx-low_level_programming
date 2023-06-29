#include "main.h"

/**
 * _strcmp - check the code.
 *
 * @s1 : is a param
 *
 * @s2 : is a param
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int len2 = 0;

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}
	if (len1 == len2)
		return (0);
	else if (len1 > len2)
		return (1);
	else if (len2 > len1)
		return (-1);
}
