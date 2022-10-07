#include "main.h"

/**
 * times_table - prints the table of 9
 *
 * Return: there is no return.
 */
void times_table(void)
	{
	int x, y, n;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	n = x * y;
	if ((n / 10) == 0)
	{
	if (y != 0)
	_putchar(' ');
	_putchar(n + '0');

	if (y == 9)
	continue;
	_putchar(',');
	_putchar(' ');
	}
	else
	{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	if (y == 9)
	continue;
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
	}
