#include "main.h"
/**
 *rev_string - function that reverses a string
 *@s: input integer
 */
void rev_string(char *s)
{
	int x, i;
	char tem;

	x = 0;

	while (*(s + x) != 0)
	{
		x++;
	}
	for (i = 0; i < x; i++)
	{
		x = x - 1;
		tem = s[i];
		s[i] = s[x];
		s[x] = tem;
	}
}
