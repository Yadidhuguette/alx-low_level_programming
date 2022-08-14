#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @: number of parameters
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lh;
	unsigned int j;
	int sum = 0

		if (n == 0)
			return (0);

	va_start(lh, n);

	for (j = 0, j < n; j++)
		sum += va_arg(lh, int);

	va_end(lh);
	return (sum);
}
