#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - check the code
 *
 * @str : is a param
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *str1;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	str1 = (char *)malloc(sizeof(*str1) * (length + 1));

	if (str1 == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < length; i++)
		{
			str1[i] = str[i];
		}
	}
	return (str1);
}
