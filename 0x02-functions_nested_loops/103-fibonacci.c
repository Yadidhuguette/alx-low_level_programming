#include <stdio.h>

/**
 * main - Prints the sum of even valued fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int x, y, xy, nxy;

	x = 1;
	y = 2;
	xy = nxy = 0;
	while (xy <= 4000000)
	{
		xy = x + y;
		x = y;
		y = xy;
		if ((x % 2) == 0)
		{
			nxy += x;
		}
	}
		printf("%ld\n", nxy);
		return (0);
}
