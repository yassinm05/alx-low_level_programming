#include "main.h"

/**
 * *cap_string - check the code.
 *
 * @str : is a param
 *
 * n : is a param
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] -= 32;
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] == 32 ||
					str[i - 1] == 9 ||
					str[i - 1] == 10 ||
					str[i - 1] == 44 ||
					str[i - 1] == 59 ||
					str[i - 1] == 46 ||
					str[i - 1] == 33 ||
					str[i - 1] == 63 ||
					str[i - 1] == 34 ||
					str[i - 1] == 40 ||
					str[i - 1] == 41 ||
					str[i - 1] == 123 ||
					str[i - 1] == 125)
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
