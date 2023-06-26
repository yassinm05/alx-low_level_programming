#include "main.h"

/**
 * print_rev - check the code.
 *
 * @s : is a param
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len = 0;
	int j = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (j = len; j >= 0; j--)
	{
		putchar(s[j]);
	}
}
