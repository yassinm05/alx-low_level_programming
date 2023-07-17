#include "dog.h

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
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %s\n", "(nil)");
		}
		printf("Age: %f\n", d->age);
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", "(nil)");
		}
	}
}
