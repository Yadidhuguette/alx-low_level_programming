#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers from 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, boolean1, boolean2;
	long int x, y, xy, xy2, x1, y2;

	x = 1;
	y = 2;
	boolean1 = boolean2 = 1;
	printf("%ld, %ld", x, y);
	for (a = 0; a < 96; a++)
	{
	if (boolean1)
	{
	xy = x + y;
	printf(", %ld", xy);
	x =y;
	y = xy;
	}
	else
	{
		if (boolean1)
		{
			x1 = x % 1000000000;
			y2 = y % 1000000000;
			x = x / 1000000000;
			y = y /10000000000;
			boolean2 = 0;
		}
		xy2 = (x1 + y2);
		xy = x + y + (xy2 / 1000000000);
		printf(", %ld", xy);
		printf("%ld", xy2 % 1000000000);
		x = y;
		x1 = y2;
		y = xy;
		y2 = (xy2 % 1000000000);
	}
	if (((x + y) < 0) && boolean1 == 1)
		boolean1 = 0;
	}
	printf("\n");
	return (0);
}
