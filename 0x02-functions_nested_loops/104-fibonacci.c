#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers from 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, boolean, boolean2;
	long int i, j, n, n2, k1, k2;

	i = 1;
	j = 2;
	boolean = boolean2 = 1;
	printf("%ld, %ld", i, j);
	for (a = 0; a < 96; a++)
	{
		if (boolean)
		{
			n = i + j;
			printf(", %ld", n);
			i = j;
			j = n;
		}
		else
		{
			if (boolean2)
			{
				k1 = i % 1000000000;
				k2 = j % 1000000000;
				i = i / 1000000000;
				j = j / 1000000000;
				boolean2 = 0;
			}
			n2 = (k1 + k2);
			n = i + j + (n2 / 1000000000);
			printf(", %ld", n);
			printf("%ld", n2 % 1000000000);
			i = j;
			k1 = k2;
			j = n;
			k2 = (n2 % 1000000000);
		}
		if (((i + j) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}

