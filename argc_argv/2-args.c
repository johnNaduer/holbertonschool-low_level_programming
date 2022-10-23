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
	int i;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	}
	return (0);
}
