#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - check the code
 *
 * @s1 : is a param
 *
 * @s2 : is a param
 *
 * @n : is a param
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j;
	char *s3;

	if (s1 == 0)
	{
		s1 = "\0";
	}
	if (s2 == 0)
	{
		s2 = "\0";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	s3 = malloc((sizeof(s3) * n) + i + 1);
	for (j = 0; j < i; j++)
	{
		s3[j] = s1[j];
	}
	for (j = 0; j < n; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';
	return (s3);
}
