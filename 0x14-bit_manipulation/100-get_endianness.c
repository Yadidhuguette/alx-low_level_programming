#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0if big endian, 1 if little
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *) &n;

	return ((int)*c);
}
