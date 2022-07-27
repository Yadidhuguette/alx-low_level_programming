#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments on the command line
 * @argv: value of the arguments
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
