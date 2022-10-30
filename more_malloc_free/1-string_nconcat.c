#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: input char
 * @s2: input char
 * @n: input unsigned int
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, z, j;

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (z = 0; *(s2 + z) != '\0'; z++)
		;
	if (z < n)
	{
		n = z;
	}
	else
	{
		z = n;
	}
	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (j = 0; j < i; j++)
	{
	*(ptr + j) = *(s1 + j);
	}

	for (j = 0; j < z; j++)
	{
	*(ptr + i + j) = *(s2 + j);
	}
	ptr[i + z] = '\0';
	return (ptr);
}

