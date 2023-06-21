#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n :is a parameter
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last_number = 0;

	if (n < 0)
		last_number = (n % 10) * -1;
	else 
		last_number = n % 10;
	_putchar ('0' + last_number);
	return (last_number);
}
