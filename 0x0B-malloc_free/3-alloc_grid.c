#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **al;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	al = malloc(height * sizeof(int *));
	if (al == NULL)
	{
		free(al);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		al[a] = malloc(width * sizeof(int));
		if (al[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(al[a]);
			free(al);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			al[a][b] = 0;

	return (al);
}
