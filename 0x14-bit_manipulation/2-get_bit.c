#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: long int
 * @index: index int
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int in;

	if (n == 0 && index < 64)
		return (0);

	for (in = 0; in <= 63; n >>= 1, in++)
	{
		if (index == in)
		{
			return (n & 1);
		}
	}

	return (-1);
}
