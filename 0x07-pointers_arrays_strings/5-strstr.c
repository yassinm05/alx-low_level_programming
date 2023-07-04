#include "main.h"

/**
 * *_strstr - check the code.
 *
 * @haystack : is a param
 *
 * @needle : is a param
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			count = 0;
			while (haystack[i + count] == needle[j + count] && needle[j + count] != '\0')
			{
				count++;
			}
			if (needle[j + count] == '\0' && haystack[i + count] == needle[j + count])
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
