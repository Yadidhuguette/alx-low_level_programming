#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to make change for
 * an amount of money.
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int ct, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	ct = atoi(argv[1]);

	while (ct > 0)
	{
		if (ct >= 25)
			ct -= 25;
		else if (ct >= 10)
			ct -= 10;
		else if (ct >= 5)
			ct -= 5;
		else if (ct >= 2)
			ct -= 2;
		else if (ct >= 1)
			ct -= 1;
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);
}
