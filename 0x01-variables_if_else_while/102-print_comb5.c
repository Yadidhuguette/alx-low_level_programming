#include <stdio.h>

/**
 * main - Print numbers fr0m 0 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z, x, y, l, op1, op2;

	z = x = y = l = 48;
	while (l < 58)
	{
		y = 48;
		while (y < 58)
		{
			x = 48;
			while (x < 58)
			{
				z = 48;
				while (z < 58)
				{
					op1 = (l * 10) + y;
					op2 = (x * 10) + z;
					if (op1 < op2)
					{
						putchar(l);
						putchar(y);
						putchar(' ');
						putchar(x);
						putchar(z);
						if (l == 57 && y == 56 && x == 57 && z == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					z++;
				}
				x++;
			}
			y++;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
