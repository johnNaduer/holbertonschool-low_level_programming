#include <stdio.h>
/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int j;

	for (j = 1 ; j < 101; j++)
	{
		if (j % 15 == 0)
	{
		printf("FizzBuzz ");
	}
	else
	{
	if (j % 3 == 0)
	{
		printf("Fizz ");
	}
	else
	{
	if (j % 5 == 0)
	{
		printf("Buzz ");
	}
	else
	{
		printf("%d ", j);
	}
	}

	}
	}
	putchar('\n');
	return (0);
}
