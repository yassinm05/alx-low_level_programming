#include "main.h"

/**
 * _strlen_recursion - check the code
 *
 * @s : is a param
 *
 * Return: Always 0.
 */

int _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _puts_recursion(s + 1));
	}
}
