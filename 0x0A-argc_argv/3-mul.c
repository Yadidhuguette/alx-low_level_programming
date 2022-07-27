#include <stdio.h>

/**
 * main - that multiplies two numbers
 * @argc: number of agurments
 * @argv: value of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, ope;

	ope = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		ope = ope * atoi(argv[i]);
	}
	printf("%d\n", ope);
	return (0);
}
