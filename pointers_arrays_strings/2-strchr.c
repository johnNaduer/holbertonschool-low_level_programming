#include "main.h"

/**
 * _strchr - function that gets the length of a prefix substring
 * @s: input char
 * @c: input char
 * Return: pointer to spot in s with c or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i + 1] == c)
		{
			return (s + i + 1);
		}
		i++;
	}

	return (0);
}
