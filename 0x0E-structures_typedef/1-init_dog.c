#include "dog.h"

/**
 * init_dog - check the code
 *
 * @d : is a param
 *
 * @name : is a param
 *
 * @age : is a param
 *
 * @owner : is a param
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
