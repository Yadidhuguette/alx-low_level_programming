#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: Always 0.
 */
int main(void)
{
	int m, n;

	srand(time(NULL));
	n = 0;
	while (n <= 2645)
	{
		m = (rand() % 128);
		n += m;
		printf("%c", m);
	}
	printf("%c", 2772 - n);

	return (0);
}
