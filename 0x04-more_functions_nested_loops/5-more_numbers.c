#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			printf("%d", j);
		_putchar('\n');
	}
}