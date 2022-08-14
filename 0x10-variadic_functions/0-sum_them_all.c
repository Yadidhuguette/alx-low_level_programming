#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: The number of parameters.
 * Return: The sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list lhlist;

	if (n == 0)
		return (0);

	va_start(lhlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(lhlist, int);

	va_end(lhlist);

	return (sun);
}
