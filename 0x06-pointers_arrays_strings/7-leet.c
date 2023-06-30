#include "main.h"

/**
 * *leet - check the code.
 *
 * @str : is a param
 *
 * n : is a param
 *
 * Return: Always 0.
 */

char *leet(char *str)
{
	int i;
	int j;
	char str1[] = {"4433007711"};
	char str2[] = {"AaEeOotTlL"};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (str[i] == str2[j])
			{
				str[i] = str1[j];
			}
		}
	}
	return (str);
}
