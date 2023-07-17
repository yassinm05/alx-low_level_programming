#ifndef DOG_H
#define DOG_H

/**
 * struct dog - check the code
 *
 * @name : is a member
 *
 * @age : is a member
 *
 * @owner : is a member
 *
 * Return: Always 0.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
