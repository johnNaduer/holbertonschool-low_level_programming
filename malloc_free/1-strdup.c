#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer
 * @str: input char
 * Return: pointer ptr
 */
char *_strdup(char *str)
{
	char *pe;
	char *ptr;
	int x, i = 0;

	pe = str;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*pe != '\0')
	{
	pe++;
	i++;
	}
	ptr = malloc(i * sizeof(char) + 1);
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (x = 0; x < i + 1; x++)
	{
		ptr[x] = str[x];
	}
	return (ptr);
}
