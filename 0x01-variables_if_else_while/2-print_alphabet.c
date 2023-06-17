#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		putchar('\n');
                letter ++;
	}
	return (0);
}
