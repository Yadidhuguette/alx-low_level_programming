#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of aguments
 * @av: starage of arguments
 *
 * Return: a pointer
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int c, j, k, se;

	se = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	c = 0;
	while (c < ac)
	{
		j = 0;
		while (av[c][j])
		{
			se++;
			j++;
		}
		se++;
		c++;
	}
	arg = malloc((sizeof(char) * se) + 1);
	if (arg == NULL)
		return (NULL);
	c = 0;
	while (c < ac)
	{
		j = 0;
		while (av[c][j])
		{
			arg[k] = av[c][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		c++;
	}
	arg[k] = '\0';
	return (arg);
}
