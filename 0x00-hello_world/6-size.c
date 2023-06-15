#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %lu.", (unsigned long)sizeof(a), " byte(s)\n");
	printf("Size of an int: %lu", (unsigned long)sizeof(b), " byte(s)\n");
	printf("Size of a long int: %lu", (unsigned long)sizeof(c), " byte(s)\n");
	printf("Size of a long long int: %lu", (unsigned long)sizeof(d), " byte(s)\n");
	printf("Size of a float: %lu", (unsigned long)sizeof(e), " byte(s)");
	return (0);
}
