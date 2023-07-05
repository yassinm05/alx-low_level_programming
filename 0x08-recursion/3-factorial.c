#include "main.h"

/**
 * factorial - check the code
 *
 * @n : is a param
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
