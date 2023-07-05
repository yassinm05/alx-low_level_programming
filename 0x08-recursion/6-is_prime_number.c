#include "main.h"

/**
 * is_prime_number - check the code
 *
 * @n : is a param
 *
 *@num : is a param
 *
 *@divide : is a param
 *
 * Return: Always 0.
 */

int prime(int num, int divide);
int is_prime_number(int n)
{
	return (prime(n, n - 1));
}
/**
 * prime - check the code
 *
 * @num : is a param
 *
 * @divide : is a param
 *
 * Return: Always 0.
 */
int prime(int num, int divide)
{
	if (num <= 0 || num == 1)
	{
		return (0);
	}
	else if (divide == 1)
	{
		return (1);
	}
	else if (num % divide == 0)
	{
		return (0);
	}
	else if (num % divide != 0)
	{
		return (prime(num, divide - 1));
	}
	else if (num == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
