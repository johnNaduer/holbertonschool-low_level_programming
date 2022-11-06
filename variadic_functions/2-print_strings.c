#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *_se, *p;
	unsigned int i;
	va_list _list;

	if (separator == NULL || *separator == 0)
		_se = "";
	else
		_se = (char *) separator;
	va_start(_list, n);

	if (n > 0)
		printf("%s", va_arg(_list, char *));
	for (i = 1; i < n; i++)
	{
		p = va_arg(_list, char*);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", _se, p);
	}
	printf("\n");
	va_end(_list);
}
