#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 48;

	while (letter <= 57)
	{
		putchar(letter);
		if(letter == 57)
			break;
		putchar(44);
		putchar(" ");
		letter++;
	}
	putchar('\n');
	return (0);
}
