#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int a, b, ope = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		ope += atoi(argv[a]);
	}
	printf("%d\n", ope);
	return (0);
}
