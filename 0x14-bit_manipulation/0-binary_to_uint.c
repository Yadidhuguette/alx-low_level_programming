#include <studio>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int co = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		co = co << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			co = co | 1;
		b++;
	}
	return (co);
}
