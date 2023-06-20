#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
