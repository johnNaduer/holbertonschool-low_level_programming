#include "main.h"
#include <stdio.h>
/**
 *print_array - function that prints n elements
 *@a: input integer
 *@n: input integer
 */

void print_array(int *a, int n)
{
	int i;

	printf("%i", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %i", a[i]);
	}
	printf("\n");
}
