#include "main.h"

/**
 * _sqrt_recursion - check the code
 *
 * @n : is a param
 *
 * @n : is a param
 *
 * @num : is a param
 *
 * Return: Always 0.
 */
int square(int n, int num);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - check the code
 *
 * @n : is a param
 *
 * @num : is a param
 *
 * Return: Always 0.
 */

int square(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	else if (num * num < n)
	{
		return (square(n, num + 1));
	}
	else if (n < 4 && (n != 1 && n != 0))
	{
		return (-1);
	}
	else
	{
		return (-1);
	}
}
