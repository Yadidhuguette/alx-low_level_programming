#include  <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long int m, lp;

	m = 612852475143;
	for (lp = 2; lp <= m; lp++)
	{
		if (m % lp == 0)
		{
			m /= lp;
			lp--;
		}
	}
	printf("%ld\n", lp);
	return (0);
}
