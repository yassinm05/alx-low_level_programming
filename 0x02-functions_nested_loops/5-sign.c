#include "main.h"

/**
 * main - Entry point
 *
 * @n :is a parameter
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+, ");
		return (1);
	}
	else if  (n < 0)
	{
		printf("-, ");
		return (-1);
	}
	else
	{
		printf("0, ");
		return (0);
	}
}
