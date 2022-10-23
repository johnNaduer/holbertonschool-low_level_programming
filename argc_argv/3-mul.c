#include <stdlib.h>
#include <stdio.h>
/**
 * main - enter the arguments
 * @argc: input integer
 * @argv: input char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
	for (i = 1; i < argc; i++)
	{
	mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
