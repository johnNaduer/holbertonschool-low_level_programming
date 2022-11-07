#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates two numbers given a string
 *
 * @ac: input int ac
 * @av: input char av
 *
 * Return: 0 
 */
int main(int ac, char *av[])
{
	int m, n;
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	m = atoi(av[1]);
	n = atoi(av[3]);
	f = get_op_func(av[2]);
	if (f == NULL || av[2][1] != 0)
	{
		printf("Error\n");
		return (99);
	}
	if ((av[2][0] == '/' || av[2][0] == '%') && n == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", f(m, n));
	return (0);
}
