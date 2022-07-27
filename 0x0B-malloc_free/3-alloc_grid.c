#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a  2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: pointer of the array or null
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return ('\0');

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return ('\0');
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
