#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 */
void print_number(int n)
{
	unsigned int count = n;

	if (n < 0)
	{
		_putchar('-');
		count = -count;
	}
	if ((count / 10) > 0)
		print_number(count / 10);

	_putchar((count % 10) + '0');
}
