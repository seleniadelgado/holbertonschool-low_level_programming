#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Write a function that frees a 2D grid previously
 * created by alloc_grid function
 * @height: parameter to use.
 * @grid: pointer used as parameter.
 *
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
