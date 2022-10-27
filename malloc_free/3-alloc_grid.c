#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that frees a 2 dimensional
 * @width: input integer
 * @height: input integer
 *
 * Return: arr
 */
int **alloc_grid(int width, int height)
{
	int h, w, j;

	int **arr = (int **)malloc(height * sizeof(int *));

	for (h = 0; h < height; h++)

	arr[h] = (int *)malloc(width * sizeof(int));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
	if (arr[h] == NULL)
	{
	for (j = 0; j < h; j++)
	{
		free(arr[j]);
	}
	return (NULL);
	}
	}
	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	for (h = 0; h < height; h++)
	{
	for (w = 0; w < width; w++)
	{
		arr[h][w] = 0;
	}
	}
	return (arr);
}
