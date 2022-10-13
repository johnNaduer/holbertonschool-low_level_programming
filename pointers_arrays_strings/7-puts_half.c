#include "main.h"
/**
 *puts_half - function that prints half of a string
 *@str: input integer
 *
 */
void puts_half(char *str)
{
	int i;

	int x = 0;

	while (*(str + x) != '\0')
	{
		x++;
	}
	i = x / 2;
	if (x % 2)
	{
		i += 1;
	}
	while (i < x)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
