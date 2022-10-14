#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: input integer
 * @n: input integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x = 0, t;

	n = n - 1;
	while (x < n)
	{
		t = *(a + x);
		*(a + x) = *(a + n);
		*(a + n) = t;
		x++;
		n--;
	}
}
