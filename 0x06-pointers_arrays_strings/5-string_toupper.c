#include "main.h"

/**
 * string_toupper- changes all lowercase letters of to uppercase
 * @n: string to be changed
 * Return: result
 */
char *string_toupper(char *n)
{
	int num = 0;

	while (*(n + num) != '\0')
	{
		if ((*(n + num) >= 97) && (*(n + num) <= 122))
			*(n + num) = *(n + num) - 32;
		num++;
	}

	return (n);
}


