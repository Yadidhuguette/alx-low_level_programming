#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if s1 = s2 otherwise a different number
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, comp = 0;

	while (comp == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
			break;
		comp = *(s1 + a) - *(s2 + a);
		a++;
	}

	return (comp);
}
