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
	char n;

	n = 'a';

	while (n <= 'z')
	{
		if (n != 'q' && n != 'e')
	{
		putchar(n);
	}
	n++;
	}
		putchar('\n');
	return (0);
}
