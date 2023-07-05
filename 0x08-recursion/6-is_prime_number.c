#include "main.h"

/**
 * is_prime_number - check the code
 *
 * @n : is a param
 *
 * @n : is a param
 *
 *@divide : is a param
 *
 * Return: Always 0.
 */

int prime(int n, int divide);
int is_prime_number(int n)
{
	return (prime(n, n - 1));
}
/**
 * prime - check the code
 *
 * @n : is a param
 *
 * @divide : is a param
 *
 * Return: Always 0.
 */
int prime(int n, int divide)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	else if (divide == 1)
	{
		return (1);
	}
	else if (n % divide == 0)
	{
		return (0);
	}
	else if (n % divide != 0)
	{
		return (prime(n, divide - 1));
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
