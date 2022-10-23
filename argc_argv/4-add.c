#include <stdio.h>
#include <stdlib.h>
/**
 * main - enter the arguments
 * @argc: input integer
 * @argv: input char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a = 0, n, m;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m]; m++)
		{
			if (isdigit(argv[n][m]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (n = 1; n < argc; n++)
	{
		a += atoi(argv[n]);
	}
	printf("%d\n", a);
	return (0);
}
