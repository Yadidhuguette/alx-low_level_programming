#include "main.h"
#include <stdlib.h>

/**
 * dfree_grid - frees a 2 dimmensional array of string
 * @grid: grid working on
 * @height: height the grid
 */
void dfree_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: imput string
 *
 * Return: a pointer
 */
char **strtow(char *str)
{
	char **arg;
	unsigned int i, height, k, j, lh;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = height = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			height++;
	arg = malloc((height + 1) * sizeof(char *));
	if (arg == NULL || height == 0)
	{
		free(arg);
		return (NULL);
	}
	for (j = lh = 0; j < height; j++)
	{
		for (i = lh; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
				lh++;
			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			{
				arg[j] = malloc((i - lh + 2) * sizeof(char));
				if (arg[j] == NULL)
				{
					dfree_grid(arg, j);
					return (NULL);
				}
				break;
			}
		}
		for (k = 0; lh <= i; lh++, k++)
			arg[j][k] = str[lh];
		arg[j][k] = '\0';
	}
	arg[j] = NULL;
	return (arg);
}
