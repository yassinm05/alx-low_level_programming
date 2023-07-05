#include "main.h"

/**
 * _print_rev_recursion - check the code
 *
 * @s : is a param
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
