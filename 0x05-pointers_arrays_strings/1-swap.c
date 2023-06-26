#include "main.h"

/**
 * swap_int - check the code.
 *
 * @a : is a param
 *
 * @b : is a param
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int cup;

	cup = *b;
	*b = *a;
	*a = cup;
}
