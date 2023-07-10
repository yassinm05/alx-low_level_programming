#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - check the code
 *
 * @s1: is a param
 *
 * @s2: is a param
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	int j;
	char *s3;

	if (s1 == NUll)
	{
		s1 = "\0";
	}
	if (s2 == NUll)
	{
		s2 = "\0";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	s3 = (char *)malloc(sizeof(*s3) * (len1 + len2 + 1));
	if (s3 == 0)
	{
		return (0);
	}
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';
	return (s3);
}
