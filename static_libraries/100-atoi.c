#include "main.h"
#include <stdio.h>
/**
 * _atoi - returns integer values from string
 * @s: input string
 *
 * Return: will return integer
 */
int _atoi(char *s)
{
	int result = 0, sign = 0, x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == '-')
			sign++;
		if (s[x] > 47 && s[x] < 58)
		{
			while (s[x] > 47 && s[x] < 58)
				result = result * 10 - (s[x++] - 48);
			break;
		}
	}
	return (result *= sign % 2 == 0 ? -1 : 1);
}
