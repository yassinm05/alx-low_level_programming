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
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				printf("%d", 1);
				k = j % 10;
			}
			printf("%d", k);
		}
	}
	 _putchar('\n');
}
