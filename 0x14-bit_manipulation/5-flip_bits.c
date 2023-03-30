#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip 
 * @n: long int 1
 * @m: long int 2
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fb;

	for (fb = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			fb++;
	}

	return (fb);
}
