#include "main.h"

/**
 * *cap_string - check the code.
 *
 * @*str : is a param
 *
 * n : is a param
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i = 0 && (str[i] >= 97 && str[i] <= 122))
				str[i] = str[i] - 32;
		else if (str[i] == 32 ||
				str[i] == 9 ||
				str[i] == 10 ||
				str[i] == 44 ||
				str[i] == 59 ||
				str[i] == 46 ||
				str[i] == 33 ||
				str[i] == 63 ||
				str[i] == 34 ||
				str[i] == 40 ||
				str[i] == 41 ||
				str[i] == 123 ||
				str[i] == 125)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			  str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}

