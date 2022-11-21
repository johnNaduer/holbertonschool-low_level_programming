#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: input unsigned long int
 * @index: input unsigned int
 * Return: (-1) or (1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _bit;

	if (n == NULL)
		return (-1);

	_bit = 1 << index;

	if ((_bit | *n) == *n)
		*n = *n ^ _bit;

	return (1);
}
