#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_char - printfs a char
 *
 * @list: input va_list
 *
 * Return: void
 */
void printf_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * printf_int - printfs an int
 *
 * @list: input va_list
 *
 * Return: void
 */
void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - printfs a float
 *
 * @list: input va_list
 *
 * Return: void
 */
void printf_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * printf_string - printfs a string
 *
 * @list: input va_list
 *
 * Return: void
 */
void printf_string(va_list list)
{
	char *str = va_arg(list, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}


/**
 * print_all - function that prints anything
 *
 * @format: input const char
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *p;
	va_list _list;
	function key[4] = { {printf_char, 'c'}, {printf_int, 'i'},
			   {printf_float, 'f'}, {printf_string, 's'} };
	int keyind = 0, notfirst = 0;

	p = format;
	va_start(_list, format);
	while (format != NULL && *p)
	{
		if (key[keyind].spec == *p)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyind].f(_list);
			p++;
			keyind = -1;
		}
		keyind++;
		p += keyind / 4;
		keyind %= 4;
	}
	printf("\n");

	va_end(_list);
}
