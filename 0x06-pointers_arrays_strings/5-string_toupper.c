#include "main.h"

/**
 * *string_toupper - check the code.
 *
 * @arr : is a param
 *
 * n : is a param
 *
 * Return: Always 0.
 */

char *string_toupper(char *arr)
{
	int i = 0;

	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 97 && <= 122)
		{
			arr[i] = arr[i] - 32;
		}
	}
	return (arr);
}
