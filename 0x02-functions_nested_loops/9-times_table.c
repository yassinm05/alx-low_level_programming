#include "main.h"
/**
 *  times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table()
{
	int i=0;
	int j=0;

	for(i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
			 printf("%d, ",j*i);
		putchar('\n');
	}
}
