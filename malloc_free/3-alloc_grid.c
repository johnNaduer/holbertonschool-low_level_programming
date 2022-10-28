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
	int **arr;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(arr + i) = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i = width; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			arr = NULL;
			return (arr);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
