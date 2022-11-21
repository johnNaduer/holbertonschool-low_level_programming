#include "main.h"
/**
  * flip_bits - function that returns the number of bits you
  * would need to flip to get from one number to another
  * @n: input unsigned long int
  * @m: input unsigned long int
  * Return: (_r)
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, _r;

	_r = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			_r++;
	return (_r);
}
