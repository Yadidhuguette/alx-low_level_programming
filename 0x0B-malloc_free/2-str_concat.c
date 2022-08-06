#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *strp;
	unsigned int i, j, size, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;

	size = i + j;

	strp = malloc((sizeof(char) * size) + 1);

	if (strp == NULL)
		return (NULL);

	k = 0;
	while (k < i)
	{
		strp[k] = s1[k];
		k++;
	}
	l = 0;
	while (k <= size)
	{
		strp[k] = s2[l];
		k++;
		l++;
	}
	return (strp);
}



