#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: input integer
 * @src: input integer
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int x, j;

	x = 0;
	j = 0;
	while (*(dest + x))
	{
		x++;
	}
	while ((*(dest + x) = *(src + j)))
	{
		x++;
		j++;
	}
	return (dest);
}
