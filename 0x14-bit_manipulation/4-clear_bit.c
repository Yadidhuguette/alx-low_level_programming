#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer
 * @index: index starting from 0
 *
 * Return: 1 or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int in;

	if (index > 63)
		return (-1);
	in = 1 << index;
	*n = *n & (~in);
	return (1);
}
