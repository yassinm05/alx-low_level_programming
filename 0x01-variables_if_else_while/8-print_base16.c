#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 5)
	{
		putchar((char) i);
		i++;
	}
	char letter = 'a';

	while(letter <= 102)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return(0);
}
