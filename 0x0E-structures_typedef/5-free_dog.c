#include "dog.h"

/**
 * free_dog - check the code
 * @d : is a param
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
