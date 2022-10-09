#include "main.h"
/**
 * print_triangle - prints a triangle
 *@size :input integer variable
 * Return: no return
 */
void print_triangle(int size)
{
	int j, i;

	if (size > 0)
	{
	for (j = 0; j < size; j++)
	{
	for (i = 0; i < size - j - 1; i++)
	{
		_putchar(' ');
	}
	for (i = 0; i < j + 1; i++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
