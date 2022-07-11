#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of times \ is printed
 */
void print_diagonal(int n)
{
	int k, l;

	for (k = 0; k < n; k++)
	{
		for (l = 0; l < k; l++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (k < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
