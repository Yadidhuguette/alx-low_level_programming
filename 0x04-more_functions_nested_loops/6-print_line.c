#include "main.h"

/**
 * print_line - That draws a straight line
 * @n: the number of times the character _ is printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
