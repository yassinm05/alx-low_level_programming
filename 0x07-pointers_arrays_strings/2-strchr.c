#include "main.h"

/**
 * *_strchr - check the code.
 *
 * @s : is a param
 *
 * @c : is a param
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}
	return (NULL);
}
