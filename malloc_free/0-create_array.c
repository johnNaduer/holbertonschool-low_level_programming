#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: input unsigned int
 * @c: input char
 *
 * Return: pointer direction
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
	{
	return (NULL);
	}
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (x = 0; x < size; x++)
	{
	ptr[x] = c;
	}
	return (ptr);
}
