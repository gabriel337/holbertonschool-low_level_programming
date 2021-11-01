#include "dog.h"

/**
 * init_dog - value to parameters
 * @d: address of struct
 * @name: parameter name
 * @age: parameters age
 * @owner: parameters owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
