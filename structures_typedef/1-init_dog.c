#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: input struc
 * @name: input char
 * @age: input float
 * @owner: input char
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
