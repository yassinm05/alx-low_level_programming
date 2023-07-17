#include "dog.h"

/**
 * free_dog - check the code
 * @d : is a param
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		if (d->name != 0)
			free(d->name);
		if (d->owner != 0)
			free(d->owner);
		free(d);
	}
}
