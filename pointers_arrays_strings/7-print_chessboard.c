#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Prints the chessboard
 * @a: input char
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;
	int size = sizeof(*a) / sizeof(char);
	char c;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			c = (*(a + x))[y];
			_putchar(c);
		}
		_putchar('\n');
	}
}
