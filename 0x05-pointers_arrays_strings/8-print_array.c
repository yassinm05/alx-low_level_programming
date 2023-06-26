#include "main.h"

/**
 * print_array - check the code.
 *
 * @a : is a param
 *
 * @n : is a param
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d,", a[i]);
		else if (i == n - 1)
			printf(" %d", a[i]);
		else
			printf(" %d,", a[i]);
	}
	putchar('\n');
}
