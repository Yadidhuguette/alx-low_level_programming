#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int j;
	va_list lhlist;

	if (separator == NULL)
		separator = "";

	va_start(lhlist, n);
	for (j = 0; j < n; j++)
	{
		sep = va_arg(lhlist, char *);
		if (sep == NULL)
			sep = "(nil)";

		printf("%s", sep);
		if (j < n - 1)
			printf("%s", separator);
	}
	va_end(lhlist);
	printf("\n");
}
