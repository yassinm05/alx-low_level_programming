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
	unsigned int length;
	char *s3;

	if (s1 == 0)
	{
		s1 = "\0";
	}
	if (s2 == 0)
	{
		s2 = "\0";
	}
	while (s1[length] != '\0')
	{
		length++;
	}
	s3 = malloc(length + n + 1);
	if (s3 == 0)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
