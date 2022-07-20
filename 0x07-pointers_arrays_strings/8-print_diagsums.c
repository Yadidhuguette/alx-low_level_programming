#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer
 * @size: size of integers
 */
void print_diagsums(int *a, int size)
{
	int j, tot = 0, tot1 = 0;

	for (j = 0; j < (size * size); j++)
	{
		if (j % (size + 1) == 0)
			tot += *(a + j);
		if (j % (size - 1) == 0 && j != 0 && j < size * size - 1)
			tot1 += *(a + j);
	}
	printf("%d, %d\n", tot, tot1);
}
