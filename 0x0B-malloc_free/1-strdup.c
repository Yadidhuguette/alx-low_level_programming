#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: a given string
 *
 * Return: pointer to the duplicated string or NULL if str = 0
 */
char *_strdup(char *str)
{
	char *strp;
	unsigned int j, k;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;

	strp = malloc(sizeof(char) * (j + 1));

	if (strp == NULL)
		return (NULL);

	for (k = 0; k <= j; k++)
	{
		strp[k] = str[k];
	}
	strp[j] = '\0';
	return (strp);
}

