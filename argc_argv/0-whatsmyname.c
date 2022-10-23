#include <stdlib.h>
#include <stdio.h>
/**
 * main - enter the arguments
 * @argc: input integer
 * @argv: input char
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
        int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}

	return (0);
}
