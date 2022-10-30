#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: input unsigned int
 * @size: input unsigned int
 *
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0)
	{
	return (NULL);
	}
	if (size == 0)
	{
	return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
	*(ptr + i) = 0;
	}
	return (ptr);
}
