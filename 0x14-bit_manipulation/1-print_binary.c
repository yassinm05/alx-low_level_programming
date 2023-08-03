#include "main.h"

/**
 * print_binary - check the code
 *
 * @n : is a param
 *
 * Return: binary.
 */

void print_binary(unsigned long int n)
{
	int num = sizeof(n) * 8;
	int res = 0;

	while (num)
	{
		if (n & 1L << --num)
		{
			_putchar('1');
			res++;
		}
		else if (res)
		{
			putchar('0');
		}
	}
	if (!res)
	{
		putchar('0');
	}
}
