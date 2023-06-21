#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n :is a parameter
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if  (n < 0)
	{
		putchar('-');
		return (1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
