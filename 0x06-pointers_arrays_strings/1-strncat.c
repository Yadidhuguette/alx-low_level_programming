#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: statring point
 * @n: number of bytes from sarting point src
 * Return: the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int num1 = 0, num2 = 0;

	while (dest[num1++])
		num2++;
	for (num1 = 0; src[num1] && num1 < n; num1++)
		dest[num2] = src[num1];
	return (dest);
}
