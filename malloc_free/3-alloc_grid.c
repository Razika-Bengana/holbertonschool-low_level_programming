#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of
 * integer
 * @height : an input
 * @width : an input
 * Return: the result
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **ar;

	if (width <= 0 && height <= 0)

		return (NULL);

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ar[a] = malloc(width * sizeof(int));

		if (ar == NULL)
		{
			for (a--; a >= 0; a--)
				free(ar[a]);
			free(ar);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			ar[a][b] = 0;
		}
	}
	return (ar);
}
