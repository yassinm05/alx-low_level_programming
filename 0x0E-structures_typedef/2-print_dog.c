#include "main.h

/**
 * print_dog - check the code
 *
 * @d : is a param
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == NULL)
		{
			printf("Name: %s\n", "(nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: %s\n", "(nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
