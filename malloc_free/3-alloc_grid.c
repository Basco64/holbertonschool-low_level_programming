#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to
 * a 2 dimensional array of integers
 *
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **grid, i;

	grid = malloc(width * sizeof(int*));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int));

		if (grid[i] == NULL)
			return (NULL)
	}
	
	return (grid);
}
