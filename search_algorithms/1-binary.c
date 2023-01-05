#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a
 * value in a sorted array of integers
 * @array: input int
 * @size: input size_t
 * @value: input int
 * Return: int binary_search
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL)
	{
	return (-1);
	}
	while (low <= high)
	{
	mid = (low + high) / 2;
	printf("Searching in array: ");

	print_array(array, low, high);

	if (array[mid] == value)
	{
	return (mid);
	}
	else if (array[mid] < value)
	{
	low = mid + 1;
	}
	else
	{
	high = mid - 1;
	}
	}
	return (-1);
}

/**
 * print_array - print
 * @array: input int
 * @low: input size_t
 * @high: input int
 * Return: no return
 */
void print_array(int *array, int low, int high)
{
	int i;

	printf("%d",array[low]);

	for (i = low + 1; i <= high; i++)
	{
	printf(", %d", array[i]);
	}
	printf("\n");
}
