#include <stdio.h>
/**
 *main - prints numbers specifics
 *return: no return
 */
int main(void)
{
	int j;

	for (j = 1 ; j < 101; j++)
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
	if (j % 15 == 0)
	{
		printf("FizzBuzz ");
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
