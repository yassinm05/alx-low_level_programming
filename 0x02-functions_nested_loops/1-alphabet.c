#include "main.h"

/**
 * main - Entry point
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
