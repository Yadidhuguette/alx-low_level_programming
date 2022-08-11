#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun value of array
 * @max: maximum value of array
 *
 * Return: pointer, NULL if failure or min > max
 */
int *array_range(int min, int max)
{
	int k;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		p[k] = min;

	return (p);
}
