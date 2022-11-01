#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  function that prints a struct dog
 * @d: input struc
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}
	if (d->name == NULL)
	{
	printf("Name: (nil)\n");
	}
	if (d->owner == NULL)
	{
	printf("Owner: (nil)\n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
