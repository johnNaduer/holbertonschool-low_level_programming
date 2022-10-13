#include "main.h"
/**
 *_strcpy - copies string pointed to by src to buffer pointed to by dest
 *@dest: input integer
 *@src: input integer
 *Retrun: pointer to dest
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
