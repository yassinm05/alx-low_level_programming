#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		char letter = 'a';

		while (letter <= 122)
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
	}
}
