#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 48;

	while (letter < 57)
	{
		putchar(letter);
		letter++;
	}
	letter = 97;

	while(letter <= 102)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return(0);
}
