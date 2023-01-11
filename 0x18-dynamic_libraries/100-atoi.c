#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: the integer
 */
int _atoi(char *s)
{
	unsigned int num = 0, n = 0, mn = 0, li = 1, j = 1, i;

	while (*(s + num) != '\0')
	{
		if (n > 0 && (*(s + num) < '0' || *(s + num) > '9'))
			break;
		if (*(s + num) == '-')
			li *= -1;

		if ((*(s + num) >= '0') && (*(s + num) <= '9'))
		{
			if (n > 0)
				j *= 10;
			n++;
		}
		num++;
	}

	for (i = num - n; i < num; i++)
	{
		mn = mn + ((*(s + i) - 48) * j);
		j /= 10;
	}
	return (mn * li);
}

