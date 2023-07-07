#include "main.h"

/**
 * _puts - check the code.
 *
 * @str : is a param
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
