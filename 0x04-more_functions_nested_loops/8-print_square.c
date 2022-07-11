#include "main.h"

/**
 * print_square - prints a square using # character
 * @size: the size of the square
 */
void print_square(int size)
{
	int k, l;

	for (k = 0; k < size; k++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar(35);
		}
		if (k != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
