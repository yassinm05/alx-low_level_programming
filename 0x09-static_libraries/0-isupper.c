#include "main.h"

/**
 * _isupper - check the code.
 *
 *@c : is a param
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
