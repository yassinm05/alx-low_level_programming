#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 48;

	while (letter <= 57)
	{
		putchar((char) letter);
		if (letter == 57)
			break;
		putchar(44);
		putchar(' ');
		letter++;
	}
	putchar('\n');
	return (0);
}
