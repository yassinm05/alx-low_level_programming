#include "main.h"

/**
 *  print_diagonal - check the code.
 *
 * @n : is a param
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
		printf("\n");
	}
}
