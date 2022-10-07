#include "main.h"

/**
 * times_table - prints the table of 9
 *
 * Return: there is no return.
 */
void times_table(void)
{
	int x, b, z;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
	for (b = 1; b <= 9; b++)
	{
	z = x * b;
		_putchar(',');
		_putchar(' ');
	if (z <= 9)
	{
		_putchar(',');
		_putchar(z + '0');
	}
	else
	{
		_putchar((z / 10) + '0');
		_putchar((z % 10) + '0');
	}
	}
		_putchar('\n');
	}
}
