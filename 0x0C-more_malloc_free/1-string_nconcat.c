#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: pointer, return NULL if failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	k = i + n;

	str = malloc(k + 1);

	if (str == NULL)
		return (NULL);

	for (l = 0; l < k; l++)
		if (l < i)
			str[l] = s1[l];
		else
			str[l] = s2[l - i];

	str[l] = '\0';

	return (str);
}
