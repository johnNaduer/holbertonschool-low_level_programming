#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input integer
 * @size: input integer
 *
 */
void print_diagsums(int *a, int size)
{
	int x, y;
	long int cant1 = 0, cant2 = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
				cant1 += *(a + x * size + y);
			if (x == (size - 1) - y)
				cant2 += *(a + x * size + y);
		}
	}
	printf("%li, %li\n", cant1, cant2);
}
