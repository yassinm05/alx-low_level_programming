#include "main.h"

/**
 * print_binary - converts a binary number string to unsigned int
 *
 * @n: is a param
 *
 * Return: the unsigned int form of  b
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8;
	int out = 0;

	while (b != 0)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			out++;
		}
		else if (out != 0)
			_putchar('0');
	}
	if (out == 0)
	{
		_putchar('0');
	}
}
