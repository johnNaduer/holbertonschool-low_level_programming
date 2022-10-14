#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: input char
 * @src: input char
 * @n: input integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		if (i < n)
			dest[x] = src[x];
		while (x < n)
			dest[x++] = '\0';

	return (dest);
}
