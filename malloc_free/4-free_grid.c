#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid prevously created by
 * your alloc_grid function
 * @height : an input
 * @grid : an input
 * Return: the result
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
