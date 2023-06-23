#include "main.h"

/**
 * print_square - check the code.
 *
 * @size : is a param
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				putchar('#');
			putchar('\n');
		}
	}
}
