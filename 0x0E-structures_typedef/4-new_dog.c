#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: character pointer
 * @owner: character pointer
 * @age: integer
 * Return: returns 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *doggy;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == 0)
	{
		free(doggy);
		return (NULL);
	}
	doggy->name = malloc(i * sizeof(doggy->name));
	if (doggy->name == 0)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		doggy->name[k] = name[k];
	doggy->name[k] = name[k];
	doggy->age = age;
	doggy->owner = malloc(j * sizeof(doggy->owner));
	if (doggy->owner == 0)
	{
		free(doggy->owner);
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		doggy->owner[k] = owner[k];
	return (doggy);
}
