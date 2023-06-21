#include "main.h"
/**
 *  print_to_98 - Entry point
 *
 * @n :is a parameter
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;
	if (i>98)
		for (i = n; i > 98; i--)
			printf("%d, ",i);
	else
		for (i = n; i < 98; i++)
			printf("%d, ",i);
	printf("98\n");
}
