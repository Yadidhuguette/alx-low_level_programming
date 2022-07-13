#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: the integer
 */
int _atoi(char *s)
{
	int i;
	unsigned int count;
	char *temp;

	temp = s;
	count = 0;
	i = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			i *= -1;
	}
	if (*temp != '\0')
	{
		do {
			count = count * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (count * i);
}
