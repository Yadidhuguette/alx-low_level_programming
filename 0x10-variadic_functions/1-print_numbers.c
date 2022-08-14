#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list lh;

	separator = (separator != NULL) ? separator : "";

	va_start(lh, n);
	for (j = 0; j < n; j++)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(lh, int));
	}
	putchar(10);
}

