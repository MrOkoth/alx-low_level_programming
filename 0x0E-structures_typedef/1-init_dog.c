#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog
 * @d:p
 * @name:p
 * @age:p
 * @owner:p
 * Return: Name of owner
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
