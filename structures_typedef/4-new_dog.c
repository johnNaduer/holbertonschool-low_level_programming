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
	int i, j, z;

	i = 0;
	j = 0;

	while (name[i++])
		;
	while (owner[j++])
		;
	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
	return (NULL);
	}

	ptr->name = malloc(sizeof(ptr->name) * i);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (z = 0; z < i; z++)
        {
        ptr->name[z] = name[z];
        }

	ptr->age = age;

	ptr->owner = malloc(sizeof(ptr->owner) * j);
	if (ptr == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (z = 0; z < j; z++)
	{
		ptr->owner[z] = owner[z];
	}
	return (ptr);
}
