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
	dog_t *_new;
	int i;
	char *ptr;

	if (name == 0 || owner == 0)
		return (NULL);
	_new = malloc(sizeof(dog_t));
	if (_new == NULL)
		return (NULL);

	for (i = 1, ptr = name; *ptr; i++)
		ptr++;
	_new->name = malloc(i);
	if (_new->name == 0)
	{
		free(_new);
		return (NULL);
	}

	for (i = 1, ptr = owner; *ptr; i++)
		ptr++;
	_new->owner = malloc(i);
	if (_new->owner == 0)
	{
		free(_new->name);
		free(_new);
		return (NULL);
	}

	for (i = 0; *name != 0; i++, name++)
		_new->name[i] = *name;
	_new->name[i] = 0;
	for (i = 0; *owner != 0; i++)
		_new->owner[i] = *owner++;
	_new->owner[i] = 0;
	_new->age = age;

	return (_new);
}
