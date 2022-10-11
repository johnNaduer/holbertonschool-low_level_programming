#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: input integer
 *Return: the length of a string
 */

int _strlen(char *s)
{
	int cant;

	cant=0;

	while(*s != '\0')
	{
	s++;
	cant++;
	}
	return (cant);
}
