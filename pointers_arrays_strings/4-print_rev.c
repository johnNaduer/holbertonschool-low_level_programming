#include "main.h"
/**
 *print_rev - function that prints a string, in reverse
 *@s: input integer
 */
void print_rev(char *s)
{
	int cant, i;

	cant = 0;
	i = 0;

	while (s[i] != '\0')
	{
		cant++;
		i++;
	}
	for (i = cant; i > 0; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}




