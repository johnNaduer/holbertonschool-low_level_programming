#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{

	char *tmp;

	tmp = dest;

	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}
		*tmp = '\0';
	return (dest);

}
