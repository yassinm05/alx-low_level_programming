#include "main.h"
/**
 * _abs - Entry point
 *
 * @n :is a parameter
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		return (n+(2*n));
	return (n);
}
