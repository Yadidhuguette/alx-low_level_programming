#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of agurments
 * @argv: value of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
