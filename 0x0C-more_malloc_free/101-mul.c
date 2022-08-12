#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _nbzero - determines if number is zero
 * @argv: argument vector.
 *
 * Return: void
 */
void _nbzero(char *argv[])
{
	int i, n1 = 1, n2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			n1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			n2 = 0;
			break;
		}

	if (n1 == 1 || n2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * crt_array - sets memory to zero
 * @ar: char array.
 * @len: length
 *
 * Return: pointer
 */
char *crt_array(char *ar, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
		ar[i] = '0';
	ar[len] = '\0';
	return (ar);
}

/**
 * _find_num - determines the length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array
 *
 * Return: length of the number
 */
int _find_num(char *argv[], int n)
{
	int lg;

	for (lg = 0; argv[n][lg]; lg++)
		if (!isdigit(argv[n][lg]))
		{
			printf("Error\n");
			exit(98);
		}

	return (lg);
}

/**
 * main - program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int n1, n2, pro, mul, mul1, i, j, k, kl;
	char *p;

	if (argc != 3)
		printf("Error\n"), exit(98);
	n1 = _find_num(argv, 1), n2 = _find_num(argv, 2);
	_nbzero(argv), pro = n1 + n2, p = malloc(pro + 1);
	if (p == NULL)
		printf("Error\n"), exit(98);
	p = crt_array(p, pro);
	k = pro - 1, i = n1 - 1, j = n2 - 1, kl = mul1 = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (mul1 > 0)
			{
				mul = (p[k] - '0') + mul1;
				if (mul > 9)
					p[k - 1] = (mul / 10) + '0';
				p[k] = (mul % 10) + '0';
			}
			i = n1 - 1, j--, mul1 = 0, kl++, k = pro - (1 + kl);
		}
		if (j < 0)
		{
			if (p[0] != '0')
				break;
			pro--;
			free(p), p = malloc(pro + 1), p = crt_array(p, pro);
			k = pro - 1, i = n1 - 1, j = n2 - 1, kl = mul1 = 0;
		}
		if (j >= 0)
		{
			mul = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (p[k] - '0') + mul1;
			mul1 = mul / 10, p[k] = (mul % 10) + '0';
		}
	}
	printf("%s\n", p);
	return (0);
}
