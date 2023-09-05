#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to the make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **yeh;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	yeh = malloc(sizeof(int *) * height);

	if (yeh == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		yeh[x] = malloc(sizeof(int) * width);

		if (yeh[x] == NULL)
		{
			for (; x >= 0; x--)
				free(yeh[x]);

			free(yeh);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			yeh[x][y] = 0;
	}

	return (yeh);
}
