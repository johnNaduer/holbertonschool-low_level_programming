#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: input char
 * @needle: input char
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int m = 0, n = 0;

	while (haystack[m])
	{
		while (needle[n] && (haystack[m] == needle[0]))
		{
			if (haystack[m + n] == needle[n])
				n++;
			else
				break;
		}
		if (needle[n])
		{
			m++;
			n = 0;
		}
		else
			return (haystack + m);
	}
	return (0);
}
