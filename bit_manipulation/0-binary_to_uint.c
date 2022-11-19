#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: input const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int n = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		a += ((b[i] - '0') * n);
		n *= 2;
		i--;
	}


	return (a);

}
