#include <stdio.h>

/**
 * main - Prints list of all natural numbers below 1024
 * multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{ int n, m;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			m += n;
	}
	printf("%d\n", m);
	return (0);
}
