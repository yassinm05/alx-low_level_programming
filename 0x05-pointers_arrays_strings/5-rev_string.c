#include "main.h"

/**
 * rev_string - check the code.
 *
 * @s : is a param
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char cup;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i < len / 2; i++)
	{
		cup = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = cup;
	}
}
