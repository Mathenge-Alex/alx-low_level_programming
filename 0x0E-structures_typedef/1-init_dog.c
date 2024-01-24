#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function initialize a variable
 * of type `struct dog`
 * @d: struct dog
 * @age: integer for age
 * @name: string for name
 * @owner: string for owners
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
