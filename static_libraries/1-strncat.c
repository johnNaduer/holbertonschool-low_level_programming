#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: input char
 * @src: input char
 * @n: input integer
 * Return: aux
 */
char *_strncat(char *dest, char *src, int n)
{
	char *aux = dest;
	int largo = 0;
	int dest_len = largo;
	int i;

	for (; *dest != '\0' ; dest++)
	{
		largo++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (aux);
}
