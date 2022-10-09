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
	for (j = 0; j < n; j++)
	{
	for (i = 0; i < n; i++)
	{
		if (i == j)
	{
		_putchar('\\');
	}
	else
	{
		_putchar(' ');
	}
	}
		_putchar('\n');
	}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	}
