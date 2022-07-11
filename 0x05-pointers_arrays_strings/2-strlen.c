#include "main.h"

/**
 * _strlen - returns a length of a string
 * @s: the string in question
 * Return: length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
