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
	for (i = (x / 2); i < x; i++)
	{
	_putchar(*(str + i));
	}
	_putchar('\n');
}
