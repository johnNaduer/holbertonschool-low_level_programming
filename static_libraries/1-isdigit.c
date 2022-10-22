#include "main.h"

/**
 * _isdigit - check if is a digit
 *@c: digit to check
 * Return: 1 for digit numeric or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
