#include "main.h"
/**
 * print_triangle - check the code.
 *
 * @size : is a param
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	if (size <= 0)
		putchar('\n');
	int i, j, k, space;

	space = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < space; j++)
			putchar(' ');
		for (k = 0; k < (size - space); k++)
			putchar('#');
		space--;
		putchar('\n');
	}
}
