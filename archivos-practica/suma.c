#include <stdlib.h>
#include <stdio.h>
/**
 * main - enter the arguments
 * @argc: input integer
 * @argv: input char
 * Return: Always 0
 */
int suma(int a, int b)
{
	return (a+b);
}

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc > 2)
	{
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	}
	c=suma(a, b);
	printf("%i\n",c);
	return (0);
}
