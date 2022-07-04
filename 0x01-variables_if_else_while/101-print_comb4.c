#include <stdio.h>

/**
 * main - Prints numbers of three digits between 012 t0 789
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z, x, y;

	z = 48;
	x = 48;
	y = 48;

	while (x < 58)
	{
		z = 48;
		while (z < 58)
		{
			y = 48;
			while (y < 58)
			{
				if (x != z && x != y && x < z && z < y)
				{
					putchar(x);
					putchar(z);
					putchar(y);
					if (z == 56 && x == 55 && y == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				y++;
			}
			z++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
