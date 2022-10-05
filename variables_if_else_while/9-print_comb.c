#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int A;

	A = '0';

	while (A <= '9')
	{
		putchar(A);
	if (A >= '0' && A <= '8')
	{
		putchar(',');
		putchar(' ');
	}
		A++;
	}
	putchar('\n');
	return (0);
}
