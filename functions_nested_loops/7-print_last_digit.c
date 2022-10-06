#include "main.h"

int print_last_digit(int x)
{
	if(x%10>=0)
	{
	_putchar(x%10+'0');
	return 1;
	}
	else
	{
	return -1;
	}
}
