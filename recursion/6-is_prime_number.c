#include "main.h"
/**
 * _root - function that prints a prime number
 * @base: input integer
 * @root: input integer
 *
 * Return: 1 if prime, 0 if not
 */
int _root(int base, int root)
{
	if (base == root)
	{
		return (1);
	}

	else
	{

	if (base % root == 0 || base < 2)
		return (0);
	}
return (_root(base, root + 1));
}
/**
 * is_prime_number - function that prints a prime number
 * @n: input integer
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	return (_root(n, 2));
}
