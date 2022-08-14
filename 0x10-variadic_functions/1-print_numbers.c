#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lhlist;
	unsigned int i;

	va_start(lhlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lhlist, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(lhlist);
}
