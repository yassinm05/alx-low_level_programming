#include "main.h"

/**
 * print_binary - Entry point
 *
 * @n : is a param
 *
 * return : the unsigned int after convert b
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int cout = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			cout++;
		}
		else if (cout)
		{
			_putchar('0');
		}
	}
	if (!cout)
	{
		_putchar('0');
	}
}
