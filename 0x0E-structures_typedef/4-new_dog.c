#include "dog.h"
#include <stdlib.h>

/**
 * strlength - check the code
 *
 * @str : is a param
 *
 * Return: Always 0.
 */

int strlength(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * *stringcopy - check the code
 *
 * @str1 : is a param
 *
 * @str2 : is a param
 *
 * Return: Always 0.
 */

char *stringcopy(char *str1, char *str2)
{
	int i = 0;

	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

/**
 * *new_dog - check the code
 *
 * @name : is a param
 *
 * @age : is a param
 *
 * @owner : is a param
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	dog2 = (dog_t *)malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		return (NULL);
	}
	dog2->name = malloc(sizeof(char) * strlen(name) + 1);
	if ((*dog2)name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if ((*dog2).owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	stringcopy(dog2->name, name);
	dog2->age = age;
	stringcopy(dog2->owner, owner);
	return (dog2);
}
