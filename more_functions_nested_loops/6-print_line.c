#include "main.h"
/**
 * print_line - prints lines
 *@n :input integer variable
 * Return: no return
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');

	}
		_putchar('\n');

	if ( n <= 0)
	{
		_putchar('\n');
	}

}
