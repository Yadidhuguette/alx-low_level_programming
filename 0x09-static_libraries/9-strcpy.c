#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest:the destination
 * @src: the origin
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *begin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (begin);
}
