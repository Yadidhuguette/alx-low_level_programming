#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination of string
 * @src: original string
 * @n: number of bytes
 * Return: the resulting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	for (; k < n; k++)
		dest[k] = '\0';

	return (dest);
}
