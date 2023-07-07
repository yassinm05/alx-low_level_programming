#include "main.h"

/**
 * *_strpbrk - check the code.
 *
 * @s : is a param
 *
 * @accept : is a param
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (accept[j] == s[i])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
