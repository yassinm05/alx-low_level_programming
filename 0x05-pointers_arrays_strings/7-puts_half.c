#include "main.h"

/**
 * puts_half - check the code.
 *
 * @str : is a param
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = len / 2; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
}
