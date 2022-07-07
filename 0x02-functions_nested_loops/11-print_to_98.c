#include "main.h"

/**
 * print_to_98 - Prints natural number fro n number to 98.
 * @n: The first number.
 *
 * Return: No return.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
