#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function that creates a new dog
 * @name: input char
 * @age: input age
 * @owner: input owner
 * Return: ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *alloc_name, *alloc_owner;
	int i, j, z;

	i = 0;
	j = 0;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
	return (NULL);
	}
	while (name[i++])
		;
	while (owner[j++])
		;
	alloc_name = malloc(sizeof(char) * i);
	if (alloc_name == NULL)
	{
		return (NULL);
	}
	alloc_owner = malloc(sizeof(char) * j);
	if (alloc_owner == NULL)
	{
	return (NULL);
	}
	for (z = 0; z < i; z++)
	{
	alloc_name[z] = name[z];
	}
	for (z = 0; z < j; z++)
	{
	alloc_owner[z] = owner[z];
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
