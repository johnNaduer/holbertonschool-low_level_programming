#include "main.h"
/**
 * print_last_digit - Prints the last digit
 *
 * @x: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int x)
{
	int residuo;

	residuo = (x % 10);

	if (x < 0)
	{
	residuo = residuo * (-1);
	}

	_putchar(residuo + '0');
	return (residuo);
}
