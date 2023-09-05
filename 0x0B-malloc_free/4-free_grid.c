#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the  2d array
 * @grid: 2d grid
 * @height: height dimension of the grid
 * Description: frees memory of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
