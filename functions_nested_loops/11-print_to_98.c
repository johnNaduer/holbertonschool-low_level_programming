#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers
 * from n to 98.
 *
 * @n: input number.
 *
 * Return: no return.
 */
	void print_to_98(int n)
	{

		int conta = 0;


	while (conta == 0)
	{
		printf("%d", n);
	if (n == 98)
	{
		conta = 1;
	}
	else
	{
		printf(", ");
	}
	if (n > 98)
	{
		n--;
	}
	else
	{
		n++;
	}
	}
		printf("\n");
	}
