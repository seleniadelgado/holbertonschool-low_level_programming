#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  **alloc_grid - function returns a pointer to a 2D array of integers.
 * @width: parameter used for width
 * @height: parameter used for height.
 * Return: 0;
 *
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int a;
	int b;

	a = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		s[a] = malloc(sizeof(int) * width);
		if (s[a] == NULL)
		{
			while (a >= 0)
			{
				free(s[a]);
				a--;
			}
			free(s);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			s[a][b] = 0;
	}
	return (s);
}
