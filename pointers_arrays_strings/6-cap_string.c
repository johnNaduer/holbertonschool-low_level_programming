#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @n: input char
 * Return: n
 */

char *cap_string(char *n)
{
	int j, k;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (j = 0; n[j] != '\0'; j++)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
		{
			n[j] = n[j] - cap;
		}

		cap = 0;

		for (k = 0; k <= 12; k++)
		{
			if (n[j] == separators[k])
			{
				k = 12;
				cap = 32;
			}
		}
	}
	return (n);
}

