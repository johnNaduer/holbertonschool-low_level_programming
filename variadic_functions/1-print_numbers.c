#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: input const char
 * @n: elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list _list;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(_list, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(_list);
}
