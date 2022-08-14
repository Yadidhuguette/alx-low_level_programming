#include "variadic_functions.h"

/**
 * sum_them_all - sums up all the parameters.
 * @n: The number of parameters.
 * Return: The sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int j;
	va_list lh;

	if (n == 0)
		return (0);

	va_start(lh, n);
	for (j = 0; j < n; j++)
		sum += va_arg(lh, int);

	va_end(lh);
	return (sum);
}
