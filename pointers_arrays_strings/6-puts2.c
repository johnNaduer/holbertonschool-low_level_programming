#include "main.h"
/**
 *puts2 - function that prints numerous pairs
 *@str: input integer
 *
 */

void puts2(char *str)
{
	int i;
	int x = 0;

	while (*(str + x) != 0)
	{
		x++;
	}
	for (i = 0; i <= x; i = i + 2)
	{
		_putchar(*(str + i));
	}
		_putchar('\n');
}
