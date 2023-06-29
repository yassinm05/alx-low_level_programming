#include "main.h"

/**
 * reverse_array - check the code.
 *
 * @a : is a param
 *
 * @n : is a param
 *
 * n : is a param
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int cup;

	while (i < j)
	{
		cup = a[j];
		a[j] = a[i];
		a[i] = cup;
		i++;
		j--;
	}
}
