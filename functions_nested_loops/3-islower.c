#include "main.h"
/**
 *_islower - returns 1 if lower case
 *
 * return: 1 if lowercase. 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
	{
		return (0);
	}
}

