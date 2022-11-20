#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: input unsigned long int
 * @index: input unsigned int
 * Return: output recursion.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int init = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}

	init <<= index;
	*n = *n | init;

	return (1);
}
