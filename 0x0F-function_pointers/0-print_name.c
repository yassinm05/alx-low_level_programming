#include "function_pointers.h"

/**
 * print_name - prints a name as is
 *
 * @name: param
 *
 * @f: param
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
