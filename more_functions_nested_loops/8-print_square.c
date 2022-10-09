#include "main.h"
/**
 * print_square - prints lines
 *@size :input integer variable
 * Return: no return
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (j = 0; j < size; j++)
	{
	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
