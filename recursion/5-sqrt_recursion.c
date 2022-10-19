#include "main.h"
/**
 *_cal - function that returns the natural square root of a number
 *@n: input integer
 *@m: input integer
 *Return: number integer
 */

int _cal(int n, int m)
{

	if (n == m * m)
	{
		return (m);
	}
	else
	{
	if (n < m * m)
	{
		return (-1);
	}
	}
		return (_cal(n, m + 1));
	}

/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: input integer
 *Return: number integer
 */
int _sqrt_recursion(int n)
{
	return (_cal(n, 1));
}
