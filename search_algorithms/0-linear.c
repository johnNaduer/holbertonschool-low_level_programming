#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 *
 * @array: input int
 * @size: input size_t
 * @value: input int
 *
 * Return: i or -1
 *
 */

int linear_search(int *array, size_t size, int value)
{

	size_t i;

if (array == NULL)
{
	return (-1);
}
for (i = 0; i < size; i++)
{
	printf("value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
	break;
}
}
	if (array[i] == value)
{
	return (i);
}
else
{
	return (-1);
}
}
