#include "main.h"
#include <stdlib.h>
/**
 * str_concat - check the code
 * @s1: input char
 * @s2: input char
 * Return: Pointer ptr
 */
char *str_concat(char *s1, char *s2)
{
	int i, z, x;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
	s1 = s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (z = 0; s2[z] != '\0'; z++)
		;

	ptr = malloc(sizeof(char) * (i + z + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		ptr[x] = s1[x];
	}
	for (x = 0; x <= z; x++)
	{
		ptr[x + i] = s2[x];
	}
	return (ptr);
}
