#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to unsigned int
 * @index: the index int
 *
 * Return: 1 or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int se;

	if (index > 63)
		return (-1);
	se = 1 << index;
	*n = (*n | se);

	return (1);
}
