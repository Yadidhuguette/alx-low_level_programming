#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of pointers
 */
void print_chessboard(char (*a)[8])
{
	int k, l;

	for (k = 0; k <= 7; k++)
	{
		for (l = 0; l <= 7; l++)
		{
			_putchar(a[k][l]);
		}
		_putchar(10);
	}
}
