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
	printf("Size of a char: ", (unsigned long)sizeof(a), " byte(s)\n");
	printf("Size of an int: ", (unsigned long )sizeof(b), " byte(s)\n");
	printf("Size of a long int: ", (unsigned long)sizeof(c), " byte(s)\n");
	printf("Size of a long long int: ", (unsigned long)sizeof(d), " byte(s)\n");
	printf("Size of a float: ", sizeof(e)," byte(s)");
	return (0);
}
