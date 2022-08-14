#include "varadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *con = "", *str;
	unsigned int j = 0;
	va_list lhlist;

	va_start(lhlist, format);

	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", con, va_arg(lhlist, int));
				break;
			case 'i':
				printf("%s%d", con, va_arg(lhlist, int));
				break;
			case 'f':
				printf("%s%f", con, va_arg(lhlist, double));
				break;
			case 's':
				str = va_arg(lhlist, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", con, str);
				break;
			default:
				j++;
				continue;
		}
		con = ", ";
		j++;
	}
	printf("\n");
	va_end(lhlist);
}
