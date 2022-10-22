#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input char
 * @accept: input char
 *
 * Return: ir
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (!accept[y])
		{
			break;
		}
	}
	return (x);
}
