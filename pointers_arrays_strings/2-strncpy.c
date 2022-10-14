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

	x = 0;
	while (x < n && *(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}
