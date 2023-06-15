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
	printf("Size of a char: ",sizeof(a)," byte(s)");
	printf("Size of an int: ",sizeof(b)," byte(s)");
	printf("Size of a long int: ",sizeof(c)," byte(s)");
	printf("Size of a long long int: ",sizeof(d)," byte(s)");
	printf("Size of a float: ",sizeof(e)," byte(s)");
	return (0);
}
