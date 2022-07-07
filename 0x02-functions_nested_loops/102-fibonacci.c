#include <stdio.h>

/**
 * main - Prints the first fibomacci numbers from 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int x, y, xy;

	x = 1;
	y = 2;
	printf("%ld, %ld", x, y);
	for (a = 0; a < 48; a++)
	{
		xy = x + y;
		printf(", %ld", xy);
		x = y;
		y = xy;
	}
	printf("\n");
	return (0);
}
