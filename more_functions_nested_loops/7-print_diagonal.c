#include "main.h"
/**
 * print_diagonal - prints lines
 *@n :input integer variable
 * Return: no return
*/
void print_diagonal(int n)
{
	int j, i;

	if (n > 0)
	{
	for (j = 1; j <= n; j++)
	{
	for (i = 1; i < j; i++)
	{

		_putchar(' ');
	}

		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
