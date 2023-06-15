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
	printf("Size of a char: ", (int)sizeof(a)," byte(s\n)");
	printf("Size of an int: ", (int)sizeof(b)," byte(s)\n");
	printf("Size of a long int: ", (int)sizeof(c)," byte(s)\n");
	printf("Size of a long long int: ", (int)sizeof(d)," byte(s)\n");
	printf("Size of a float: ", sizeof(e)," byte(s)");
	return (0);
}
