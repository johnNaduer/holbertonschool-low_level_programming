#include "main.h"


int print_last_digit(int x)
{
	int residuo;
	
	residuo=(x%10);

	if(x < 0)
	{
	residuo=residuo*(-1);
	}

	_putchar(residuo+'0');
	return (residuo);
}
